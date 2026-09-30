/*
FUNCTION_NAME: Oculus.Interaction.Input.OneEuroFilter.<>c$$<CreateVector4>b__18_0
ENTRY_POINT: 0524a3fc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_11
*/


void Oculus_Interaction_Input_OneEuroFilter_<>c__<CreateVector4>b__18_0(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  int *piVar15;
  int iVar16;
  
  if ((DAT_06bba991 & 1) == 0) {
    FUN_02f08768(Oculus_Platform_Request<SendInvitesResult>_TypeInfo);
    FUN_02f08768(Oculus_Platform_Request<Purchase>_TypeInfo);
    FUN_02f08768(Oculus_Platform_Request<OrgScopedID>_TypeInfo);
    FUN_02f08768(Oculus_Platform_Request<ShareMediaResult>_TypeInfo);
    FUN_02f08768(Oculus_Platform_Request<string>_TypeInfo);
    FUN_02f08768(Oculus_Platform_Request<SystemVoipState>_TypeInfo);
    DAT_06bba991 = 1;
  }
  puVar7 = Oculus_Platform_Request<SystemVoipState>_TypeInfo;
  puVar6 = Oculus_Platform_Request<string>_TypeInfo;
  puVar5 = Oculus_Platform_Request<SendInvitesResult>_TypeInfo;
  puVar4 = Oculus_Platform_Request<Purchase>_TypeInfo;
  puVar3 = Oculus_Platform_Request<OrgScopedID>_TypeInfo;
  if (*(int *)(param_1 + 0x38) == -1) {
    return;
  }
  lVar9 = *(long *)(param_1 + 0x28);
  if (lVar9 == 0) {
LAB_0524a60c:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar1 = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x40);
  iVar16 = 0;
  do {
    if (*(int *)(lVar9 + 0x18) <= iVar16) {
      return;
    }
    plVar10 = (long *)FUN_03abf644(lVar9,iVar16,*(undefined8 *)puVar7);
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_0524a60c;
    iVar8 = FUN_03bd9250(*(long *)(param_1 + 0x30),iVar16,*(undefined8 *)puVar6);
    uVar2 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    if (iVar8 != -1) {
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_0524a60c;
      iVar8 = FUN_03bd9250(*(long *)(param_1 + 0x30),iVar16,*(undefined8 *)puVar6);
      uVar2 = iVar8 - *(int *)(param_1 + 0x40);
      uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
    }
    if ((*(long *)(param_1 + 0x28) == 0) ||
       (plVar11 = (long *)FUN_03abf644(*(long *)(param_1 + 0x28),iVar16,*(undefined8 *)puVar7),
       plVar11 == (long *)0x0)) goto LAB_0524a60c;
    lVar9 = *plVar11;
    uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
          puVar12 = (undefined8 *)(lVar9 + (long)(*piVar15 + 6) * 0x10 + 0x138);
          goto LAB_0524a584;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar12 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar4,6);
LAB_0524a584:
    uVar13 = (*(code *)*puVar12)(plVar11,puVar12[1]);
    iVar8 = FUN_0338e89c(uVar13,*(undefined8 *)puVar5);
    if (plVar10 == (long *)0x0) goto LAB_0524a60c;
    lVar9 = *plVar10;
    uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar12 = (undefined8 *)(lVar9 + (long)(*piVar15 + 3) * 0x10 + 0x138);
          goto LAB_0524a5f0;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar12 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)puVar3,3);
LAB_0524a5f0:
    (*(code *)*puVar12)(plVar10,iVar8 + uVar2,puVar12[1]);
    lVar9 = *(long *)(param_1 + 0x28);
    iVar16 = iVar16 + 1;
    if (lVar9 == 0) goto LAB_0524a60c;
  } while( true );
}


