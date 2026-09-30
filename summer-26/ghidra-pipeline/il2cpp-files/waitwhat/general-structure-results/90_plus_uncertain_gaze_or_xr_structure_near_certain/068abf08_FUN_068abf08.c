/*
FUNCTION_NAME: FUN_068abf08
ENTRY_POINT: 068abf08
PROGRAM: waitwhat-libil2cpp.so
SCORE: 116
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_7;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_068abf08(long param_1,long param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 local_50;
  undefined4 local_48;
  
  if ((DAT_075590f4 & 1) == 0) {
    FUN_03188a78(OVRPlugin_OVRP_1_2_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_11_0_TypeInfo);
    FUN_03188a78(System_Net_FtpWebRequest_<>c_TypeInfo);
    DAT_075590f4 = 1;
  }
  local_48 = 0;
  local_50 = 0;
  FUN_068b07f0(param_1,param_2,0);
  lVar7 = FUN_068b06d0(param_1,0);
  cVar2 = DAT_075457d6;
  if (lVar7 == 0) goto LAB_068ac238;
  if (*(int *)(lVar7 + 0x18) != 1) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x2e0);
  *(int *)(param_1 + 0x2e4) = iVar5;
  if (cVar2 == '\0') {
    FUN_03188a78(PTR_DAT_070c1a80);
    iVar5 = *(int *)(param_1 + 0x2e4);
    DAT_075457d6 = '\x01';
  }
  local_50 = **(ulong **)(*(long *)PTR_DAT_070c1a80 + 0xb8);
  local_48 = (undefined4)(*(ulong **)(*(long *)PTR_DAT_070c1a80 + 0xb8))[1];
  if ((iVar5 == 2) &&
     (iVar5 = UnityEngine_SkinnedMeshRenderer__set_rootBone_Injected(param_1,&local_50,0,0),
     iVar5 != 0)) {
    if (param_2 == 0) goto LAB_068ac238;
    iVar5 = *(int *)(param_1 + 0x2b0);
    uVar8 = FUN_06852520(param_2,0);
    puVar1 = OVRPlugin_OVRP_1_2_0_TypeInfo;
    plVar9 = (long *)thunk_FUN_031c3cac(uVar8,*(undefined8 *)OVRPlugin_OVRP_1_2_0_TypeInfo);
    if (plVar9 == (long *)0x0) {
LAB_068ac0e4:
      if (iVar5 != 1) goto LAB_068ac1ac;
    }
    else {
      lVar11 = *plVar9;
      lVar7 = *(long *)puVar1;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar7) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_068ac094;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar10 = (undefined8 *)FUN_031c0d08(plVar9,lVar7,0);
LAB_068ac094:
      iVar6 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if (iVar6 == 0) goto LAB_068ac0e4;
      lVar11 = *plVar9;
      lVar7 = *(long *)puVar1;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar7) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_068ac198;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar10 = (undefined8 *)FUN_031c0d08(plVar9,lVar7,0);
LAB_068ac198:
      iVar5 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if (iVar5 != 2) goto LAB_068ac1ac;
    }
    plVar9 = (long *)FUN_068a9d4c(param_1);
    uVar4 = local_48;
    uVar12 = local_50;
    if (plVar9 != (long *)0x0) {
      lVar7 = *plVar9;
      uVar3 = local_50._4_4_;
      uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)OVRPlugin_OVRP_1_11_0_TypeInfo) {
            puVar10 = (undefined8 *)(lVar7 + (long)(*piVar14 + 6) * 0x10 + 0x138);
            goto LAB_068ac15c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_031c0d08(plVar9,*(long *)OVRPlugin_OVRP_1_11_0_TypeInfo,6);
LAB_068ac15c:
                    /* WARNING: Could not recover jumptable at 0x068ac188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar10)(uVar12 & 0xffffffff,uVar3,uVar4,plVar9,puVar10[1]);
      return;
    }
  }
  else {
LAB_068ac1ac:
    plVar9 = (long *)FUN_068a9d4c(param_1);
    if (plVar9 != (long *)0x0) {
      lVar7 = *plVar9;
      uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)OVRPlugin_OVRP_1_11_0_TypeInfo) {
            puVar10 = (undefined8 *)(lVar7 + (long)(*piVar14 + 9) * 0x10 + 0x138);
            goto LAB_068ac214;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar10 = (undefined8 *)FUN_031c0d08(plVar9,*(long *)OVRPlugin_OVRP_1_11_0_TypeInfo,9);
LAB_068ac214:
                    /* WARNING: Could not recover jumptable at 0x068ac234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar10)(plVar9,puVar10[1]);
      return;
    }
  }
LAB_068ac238:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


