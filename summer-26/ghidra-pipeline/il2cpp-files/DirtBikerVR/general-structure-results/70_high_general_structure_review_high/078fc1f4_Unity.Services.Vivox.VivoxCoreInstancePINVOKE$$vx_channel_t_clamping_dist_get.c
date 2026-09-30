/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_channel_t_clamping_dist_get
ENTRY_POINT: 078fc1f4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_channel_t_clamping_dist_get(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  int *piVar9;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *plVar10;
  
  if (unaff_x22 == 0) {
LAB_078fc420:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  *(long *)(unaff_x22 + 0x10) = unaff_x21;
  thunk_FUN_03afed3c();
  uVar2 = FUN_065cd284();
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_065cd284();
    puVar1 = Unity_Properties_TypeConverter<object,_byte>_TypeInfo;
    puVar7 = System_Collections_Generic_List<ISessionInfo>_TypeInfo;
    if ((uVar2 & 1) == 0) {
      plVar10 = *(long **)(unaff_x21 + 0x38);
      if (plVar10 == (long *)0x0) {
        uVar5 = 0;
        uVar4 = 0;
      }
      else {
        lVar8 = *plVar10;
        uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar2 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
                    /* try { // try from 078fc268 to 079fc273 has its CatchHandler @ 078fc530 */
            if (*(long *)(piVar9 + -2) ==
                *(long *)System_Collections_Generic_List<ISessionInfo>_TypeInfo) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_078fc29c;
            }
            uVar2 = uVar2 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)
                 FUN_03ac43c4(plVar10,*(long *)
                                       System_Collections_Generic_List<ISessionInfo>_TypeInfo,0);
LAB_078fc29c:
        lVar8 = (*(code *)*puVar3)(plVar10,puVar3[1]);
        if (lVar8 == 0) {
          uVar4 = 0;
        }
        else {
          plVar10 = *(long **)(unaff_x21 + 0x30);
          if (plVar10 == (long *)0x0) {
            uVar4 = 0;
          }
          else {
            lVar8 = *plVar10;
            uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar2 != 0) {
              piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)System_Action<TimeSpan>_TypeInfo) {
                  puVar3 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_078fc320;
                }
                uVar2 = uVar2 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)System_Action<TimeSpan>_TypeInfo,0)
            ;
LAB_078fc320:
            uVar4 = (*(code *)*puVar3)(plVar10,puVar3[1]);
          }
          uVar2 = FUN_065cc2f0(uVar4);
          uVar4 = unaff_x19;
          if ((uVar2 & 1) == 0) {
            uVar4 = 0;
          }
        }
        plVar10 = *(long **)(unaff_x21 + 0x38);
        if (plVar10 == (long *)0x0) {
          uVar5 = 0;
        }
        else {
          lVar8 = *plVar10;
          uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar2 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar7) {
                puVar3 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_078fc3b0;
              }
              uVar2 = uVar2 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar2 != 0);
          }
          puVar3 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar7,0);
LAB_078fc3b0:
          uVar5 = (*(code *)*puVar3)(plVar10,puVar3[1]);
        }
      }
      uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
      FUN_07918110(uVar6,unaff_x20,unaff_x19,uVar5,uVar4,0);
      if (unaff_x22 != 0) {
        *(undefined8 *)(unaff_x22 + 0x18) = uVar6;
        thunk_FUN_03afed3c((undefined8 *)(unaff_x22 + 0x18),uVar6);
        FUN_078fc4a8(unaff_x22);
        return;
      }
      goto LAB_078fc420;
    }
    thunk_FUN_03af1434(PTR_DAT_08491298);
                    /* try { // try from 078fc450 to 079fc457 has its CatchHandler @ 078fc520 */
    uVar4 = thunk_FUN_03ac74bc();
                    /* try { // try from 078fc458 to 079fc49f has its CatchHandler @ 078fc1a4 */
    puVar7 = 
    UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<VolumetricCloudsSystem_VolumetricCloudsAccumulationData,_RenderGraphContext>_TypeInfo
    ;
  }
  else {
                    /* try { // try from 078fc424 to 079fc427 has its CatchHandler @ 078fc50c */
    thunk_FUN_03af1434(PTR_DAT_08491298);
    uVar4 = thunk_FUN_03ac74bc();
    puVar7 = Unity_Properties_TypeConverter<object,_char>_TypeInfo;
                    /* try { // try from 078fc438 to 079fc43f has its CatchHandler @ 078fc508 */
  }
  uVar5 = thunk_FUN_03af1434(puVar7);
  uVar6 = thunk_FUN_03af1434(Oculus_Platform_Request<LeaderboardEntryList>_TypeInfo);
  FUN_066b7574(uVar4,uVar5,uVar6,0);
  uVar5 = thunk_FUN_03af1434(Unity_Properties_TypeConverter<object,_double>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar4,uVar5);
}


