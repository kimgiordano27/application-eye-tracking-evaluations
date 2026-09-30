/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<WitEntityInfo>
ENTRY_POINT: 020e97dc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_5;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x020e99bc) */

void System_Array__InternalArray__get_Item<WitEntityInfo>(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar9;
  undefined8 uVar10;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(Method_System_Array_Resize<OVRPlugin_Quatf>__);
  thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<bool>__ctor__);
  *(undefined1 *)(unaff_x21 + 0xab3) = 1;
  plVar9 = (long *)(unaff_x19 + 0x10);
  if (*plVar9 == 0) {
    FUN_0401ccf0(1,0);
    puVar1 = Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__;
    lVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__
                              );
                    /* try { // try from 020e982c to 021e9837 has its CatchHandler @ 020e996c */
    FUN_04029754(lVar2,*(undefined8 *)
                        Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_textInputBase__,
                 0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
                    /* try { // try from 020e9858 to 021e985f has its CatchHandler @ 020e9978 */
    lVar2 = FUN_02159f84(lVar2,*(undefined8 *)Method_System_Collections_Generic_Queue<bool>__ctor__,
                         *(undefined8 *)
                          Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Add__);
    uVar10 = *(undefined8 *)(unaff_x19 + 0x18);
                    /* try { // try from 020e9874 to 021e9877 has its CatchHandler @ 020e9980 */
    plVar3 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar1);
    FUN_04029754(plVar3,uVar10,0);
                    /* try { // try from 020e9888 to 021e988f has its CatchHandler @ 020e9970 */
    plVar4 = (long *)FUN_01f08890(*(undefined8 *)
                                   Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                  ,2);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if ((lVar2 != 0) &&
       (lVar5 = thunk_FUN_01f116d0(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
      uVar10 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar10,0);
    }
    if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    plVar4[4] = lVar2;
    thunk_FUN_01f51358(plVar4 + 4,lVar2);
    if ((unaff_x20 != 0) && (lVar2 = thunk_FUN_01f116d0(), lVar2 == 0)) {
      uVar10 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar10,0);
    }
    if (*(uint *)(plVar4 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    plVar4[5] = unaff_x20;
    thunk_FUN_01f51358();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar2 = FUN_021588f4(plVar3,*(undefined8 *)Method_System_Array_Resize<OVRPlugin_Quatf>__,plVar4,
                         *(undefined8 *)
                          Method_System_Array_Resize<InputManager_StateChangeMonitorsForDevice>__);
    *plVar9 = lVar2;
    thunk_FUN_01f51358(plVar9);
    lVar2 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_020e9998;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_020e9998:
    (*(code *)*puVar6)(plVar3,puVar6[1]);
  }
  return;
}


