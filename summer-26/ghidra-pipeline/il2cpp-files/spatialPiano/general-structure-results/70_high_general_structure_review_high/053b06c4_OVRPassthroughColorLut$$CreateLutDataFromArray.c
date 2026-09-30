/*
FUNCTION_NAME: OVRPassthroughColorLut$$CreateLutDataFromArray
ENTRY_POINT: 053b06c4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


void OVRPassthroughColorLut__CreateLutDataFromArray(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  uint uStack000000000000000c;
  
  puVar2 = PTR_DAT_067caa58;
  if ((DAT_06bbd714 & 1) == 0) {
    FUN_02f08768(Oculus_Platform_MessageWithNetSyncVoipAttenuationValueList_TypeInfo);
    FUN_02f08768(PTR_DAT_067caa30);
    FUN_02f08768(PTR_DAT_067caa58);
    FUN_02f08768(
                System_Func<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_T11,_T12,_T13,_T14,_T15,_T16,_TResult>_var
                );
    DAT_06bbd714 = 1;
  }
  puVar1 = PTR_DAT_067caa30;
  uStack000000000000000c = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar10 = *param_1;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar5 = FUN_0542ee70(uVar10,*(long *)(*(long *)puVar2 + 0xb8) + 8,&stack0x0000000c,0);
  puVar1 = Oculus_Platform_MessageWithNetSyncVoipAttenuationValueList_TypeInfo;
  if ((uVar5 & 1) == 0) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9600);
    uVar10 = thunk_FUN_02f45270();
    uVar7 = thunk_FUN_02f6ef30(
                              Oculus_Platform_MessageWithNetSyncSessionsChangedNotification_TypeInfo
                              );
    FUN_0510bee0(uVar10,uVar7,0);
    uVar7 = thunk_FUN_02f6ef30(Oculus_Platform_MessageWithOrgScopedID_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar10,uVar7);
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar8 = *param_2;
  uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar5 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)Oculus_Platform_MessageWithNetSyncVoipAttenuationValueList_TypeInfo) {
        puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 3) * 0x10 + 0x138);
        goto LAB_053b07cc;
      }
      uVar5 = uVar5 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_02f421d0(param_2,*(long *)
                                 Oculus_Platform_MessageWithNetSyncVoipAttenuationValueList_TypeInfo
                        ,3);
LAB_053b07cc:
  (*(code *)*puVar6)(param_2,puVar6[1]);
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar8 = *(long *)puVar2;
  }
  uVar3 = uStack000000000000000c;
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
  if (lVar8 == 0) {
    if (uStack000000000000000c != 0) {
      FUN_050f577c(0);
    }
    lVar8 = 0;
    uVar3 = 0;
  }
  else {
    if (*(uint *)(lVar8 + 0x18) < uStack000000000000000c) {
      FUN_050f577c(0);
    }
    lVar8 = lVar8 + 0x20;
  }
  FUN_053b09c0(lVar8,uVar3,param_2);
  lVar8 = *param_2;
  uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar5 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
        puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 4) * 0x10 + 0x138);
        goto LAB_053b0888;
      }
      uVar5 = uVar5 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)FUN_02f421d0(param_2,*(long *)puVar1,4);
LAB_053b0888:
  uVar3 = (*(code *)*puVar6)(param_2,0xf,puVar6[1]);
  lVar8 = *param_2;
  uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar5 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
        puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 4) * 0x10 + 0x138);
        goto LAB_053b08ec;
      }
      uVar5 = uVar5 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)FUN_02f421d0(param_2,*(long *)puVar1,4);
LAB_053b08ec:
  uVar4 = (*(code *)*puVar6)(param_2,2,puVar6[1]);
  if ((uVar3 & (uVar4 ^ 0xffffffff) & 1) != 0) {
    lVar8 = *param_2;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_053b0954;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_02f421d0(param_2,*(long *)puVar1,2);
LAB_053b0954:
    (*(code *)*puVar6)(param_2,2,puVar6[1]);
  }
  return;
}


