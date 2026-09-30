/*
FUNCTION_NAME: Oculus.Interaction.Input.OneEuroFilter.<>c$$<CreatePose>b__20_0
ENTRY_POINT: 0524a644
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_12
*/


void Oculus_Interaction_Input_OneEuroFilter_<>c__<CreatePose>b__20_0(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  int extraout_var;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  int *piVar14;
  int iVar15;
  
  if ((DAT_06bba992 & 1) == 0) {
    FUN_02f08768(Oculus_Platform_Request<SendInvitesResult>_TypeInfo);
    FUN_02f08768(Oculus_Platform_Request<Purchase>_TypeInfo);
    FUN_02f08768(Oculus_Platform_Request<OrgScopedID>_TypeInfo);
    FUN_02f08768(Oculus_Platform_Request<ShareMediaResult>_TypeInfo);
    FUN_02f08768(Oculus_Platform_Request<string>_TypeInfo);
    FUN_02f08768(Oculus_Platform_Request<SystemVoipState>_TypeInfo);
    DAT_06bba992 = 1;
  }
  puVar6 = Oculus_Platform_Request<SystemVoipState>_TypeInfo;
  puVar5 = Oculus_Platform_Request<string>_TypeInfo;
  puVar4 = Oculus_Platform_Request<SendInvitesResult>_TypeInfo;
  puVar3 = Oculus_Platform_Request<OrgScopedID>_TypeInfo;
  if (*(int *)(param_1 + 0x3c) == -1) {
    return;
  }
  lVar8 = *(long *)(param_1 + 0x28);
  if (lVar8 == 0) {
LAB_0524a84c:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  iVar15 = 0;
  uVar1 = *(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x44);
  do {
    if (*(int *)(lVar8 + 0x18) <= iVar15) {
      return;
    }
    plVar9 = (long *)FUN_03abf644(lVar8,iVar15,*(undefined8 *)puVar6);
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_0524a84c;
    uVar10 = FUN_03bd9250(*(long *)(param_1 + 0x30),iVar15,*(undefined8 *)puVar5);
    uVar2 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    if (uVar10 < 0xffffffff00000000) {
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_0524a84c;
      FUN_03bd9250(*(long *)(param_1 + 0x30),iVar15,*(undefined8 *)puVar5);
      uVar2 = extraout_var - *(int *)(param_1 + 0x44);
      uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
    }
    if ((*(long *)(param_1 + 0x28) == 0) ||
       (plVar11 = (long *)FUN_03abf644(*(long *)(param_1 + 0x28),iVar15,*(undefined8 *)puVar6),
       plVar11 == (long *)0x0)) goto LAB_0524a84c;
    lVar8 = *plVar11;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)Oculus_Platform_Request<Purchase>_TypeInfo) {
          puVar12 = (undefined8 *)(lVar8 + (long)(*piVar14 + 7) * 0x10 + 0x138);
          goto LAB_0524a7c4;
        }
        uVar10 = uVar10 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar10 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_02f421d0(plVar11,*(long *)Oculus_Platform_Request<Purchase>_TypeInfo,7);
LAB_0524a7c4:
    uVar13 = (*(code *)*puVar12)(plVar11,puVar12[1]);
    iVar7 = FUN_0338e89c(uVar13,*(undefined8 *)puVar4);
    if (plVar9 == (long *)0x0) goto LAB_0524a84c;
    lVar8 = *plVar9;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
          puVar12 = (undefined8 *)(lVar8 + (long)(*piVar14 + 5) * 0x10 + 0x138);
          goto LAB_0524a830;
        }
        uVar10 = uVar10 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar10 != 0);
    }
    puVar12 = (undefined8 *)FUN_02f421d0(plVar9,*(long *)puVar3,5);
LAB_0524a830:
    (*(code *)*puVar12)(plVar9,iVar7 + uVar2,puVar12[1]);
    lVar8 = *(long *)(param_1 + 0x28);
    iVar15 = iVar15 + 1;
    if (lVar8 == 0) goto LAB_0524a84c;
  } while( true );
}


