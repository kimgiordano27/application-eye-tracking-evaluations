/*
FUNCTION_NAME: FUN_035081a8
ENTRY_POINT: 035081a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_8;telemetry_or_network_hits_13
*/


ulong FUN_035081a8(long param_1,long param_2,long param_3,int param_4,int param_5,uint param_6)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
                    /* try { // try from 035081d8 to 036081e7 has its CatchHandler @ 035081e8 */
  lVar3 = param_1;
  if ((DAT_04832f95 & 1) == 0) {
                    /* catch() { ... } // from try @ 03508160 with catch @ 035081e8
                       catch() { ... } // from try @ 035081d8 with catch @ 035081e8 */
    lVar3 = thunk_FUN_01efb3a4(
                              Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                              );
                    /* try { // try from 035081ec to 036081ef has its CatchHandler @ 035081f8 */
                    /* try { // try from 035081f0 to 036081fb has its CatchHandler @ 03507d70 */
    DAT_04832f95 = 1;
  }
  puVar5 = Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__;
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    puVar5 = Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_1__;
  }
  else {
                    /* catch() { ... } // from try @ 035081ec with catch @ 035081f8 */
    if (param_3 != 0) {
      iVar1 = *(int *)(param_2 + 0x10);
      if (iVar1 < param_4) {
LAB_03508330:
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar6 = thunk_FUN_01f117cc();
        uVar7 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_0__);
        puVar5 = 
        Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseMoveEvent>__;
      }
      else {
        if (iVar1 == 0) {
          return (ulong)-(uint)(*(int *)(param_3 + 0x10) != 0);
        }
        if (param_4 < 0) goto LAB_03508330;
        if ((-1 < param_5) && (param_4 <= iVar1 - param_5)) {
          if (param_6 == 0x10000000) {
            bVar2 = true;
LAB_035082d4:
            uVar4 = FUN_03508458(lVar3,param_2,param_3,param_4,param_5,bVar2);
            return uVar4;
          }
          if ((param_6 < 0x20) || (param_6 == 0x40000000)) {
            if (*(int *)(*(long *)
                          Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                        + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if (DAT_04833019 == '\0') {
              thunk_FUN_01efb3a4(
                                Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                                );
              DAT_04833019 = '\x01';
            }
            lVar3 = *(long *)puVar5;
            if (*(int *)(lVar3 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar3 = *(long *)puVar5;
            }
            if (**(char **)(lVar3 + 0xb8) == '\0') {
              uVar4 = FUN_035099d4(param_1,param_2,param_4,param_5,param_3,param_6,1);
              return uVar4;
            }
            bVar2 = (param_6 & 0x10000001) != 0;
            goto LAB_035082d4;
          }
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
          uVar6 = thunk_FUN_01f117cc();
          uVar7 = thunk_FUN_01efb3a4(
                                    Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<string>__
                                    );
          uVar8 = thunk_FUN_01efb3a4(
                                    Method_Unity_Collections_LowLevel_Unsafe_UnsafeList_SetCapacity<AllocatorManager_AllocatorHandle>__
                                    );
          FUN_034efd98(uVar6,uVar7,uVar8,0);
          goto LAB_035083f8;
        }
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar6 = thunk_FUN_01f117cc();
        uVar7 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsField_<_ctor>b__10_1__);
        puVar5 = 
        Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseDownEvent>__;
      }
      uVar8 = thunk_FUN_01efb3a4(puVar5);
      FUN_034f3578(uVar6,uVar7,uVar8,0);
      goto LAB_035083f8;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    puVar5 = Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__;
  }
  uVar7 = thunk_FUN_01efb3a4(puVar5);
  FUN_034efd20(uVar6,uVar7,0);
LAB_035083f8:
  uVar7 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_FullSerializer_fsData_get_Type__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,uVar7);
}


