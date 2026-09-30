/*
FUNCTION_NAME: UnityEngine.Mesh$$get_blendShapeCount_Injected
ENTRY_POINT: 068abf4c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 96
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_7;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_Mesh__get_blendShapeCount_Injected(void)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar13;
  undefined4 uStack0000000000000004;
  
  FUN_03188a78(System_Net_FtpWebRequest_<>c_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0xf4) = 1;
  FUN_068b07f0();
  lVar5 = FUN_068b06d0();
  cVar2 = DAT_075457d6;
  if (lVar5 == 0) goto LAB_068ac238;
  if (*(int *)(lVar5 + 0x18) != 1) {
    return;
  }
  iVar3 = *(int *)(unaff_x19 + 0x2e0);
  *(int *)(unaff_x19 + 0x2e4) = iVar3;
  if (cVar2 == '\0') {
    FUN_03188a78(PTR_DAT_070c1a80);
    iVar3 = *(int *)(unaff_x19 + 0x2e4);
    DAT_075457d6 = '\x01';
  }
  uVar13 = **(ulong **)(*(long *)PTR_DAT_070c1a80 + 0xb8);
  uVar11 = (*(ulong **)(*(long *)PTR_DAT_070c1a80 + 0xb8))[1];
  if ((iVar3 == 2) && (iVar3 = UnityEngine_SkinnedMeshRenderer__set_rootBone_Injected(), iVar3 != 0)
     ) {
    if (unaff_x20 == 0) goto LAB_068ac238;
    iVar3 = *(int *)(unaff_x19 + 0x2b0);
    uVar6 = FUN_06852520();
    puVar1 = OVRPlugin_OVRP_1_2_0_TypeInfo;
    plVar7 = (long *)thunk_FUN_031c3cac(uVar6,*(undefined8 *)OVRPlugin_OVRP_1_2_0_TypeInfo);
    if (plVar7 == (long *)0x0) {
LAB_068ac0e4:
      if (iVar3 != 1) goto LAB_068ac1ac;
    }
    else {
      lVar9 = *plVar7;
      lVar5 = *(long *)puVar1;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar5) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_068ac094;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_031c0d08(plVar7,lVar5,0);
LAB_068ac094:
      iVar4 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if (iVar4 == 0) goto LAB_068ac0e4;
      lVar9 = *plVar7;
      lVar5 = *(long *)puVar1;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar5) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_068ac198;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_031c0d08(plVar7,lVar5,0);
LAB_068ac198:
      iVar3 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if (iVar3 != 2) goto LAB_068ac1ac;
    }
    plVar7 = (long *)FUN_068a9d4c();
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uStack0000000000000004 = (undefined4)(uVar13 >> 0x20);
      uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)OVRPlugin_OVRP_1_11_0_TypeInfo) {
            puVar8 = (undefined8 *)(lVar5 + (long)(*piVar12 + 6) * 0x10 + 0x138);
            goto LAB_068ac15c;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_031c0d08(plVar7,*(long *)OVRPlugin_OVRP_1_11_0_TypeInfo,6);
LAB_068ac15c:
                    /* WARNING: Could not recover jumptable at 0x068ac188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar8)(uVar13 & 0xffffffff,uStack0000000000000004,(int)uVar11,plVar7,puVar8[1]);
      return;
    }
  }
  else {
LAB_068ac1ac:
    plVar7 = (long *)FUN_068a9d4c();
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)OVRPlugin_OVRP_1_11_0_TypeInfo) {
            puVar8 = (undefined8 *)(lVar5 + (long)(*piVar12 + 9) * 0x10 + 0x138);
            goto LAB_068ac214;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_031c0d08(plVar7,*(long *)OVRPlugin_OVRP_1_11_0_TypeInfo,9);
LAB_068ac214:
                    /* WARNING: Could not recover jumptable at 0x068ac234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar8)(plVar7,puVar8[1]);
      return;
    }
  }
LAB_068ac238:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


