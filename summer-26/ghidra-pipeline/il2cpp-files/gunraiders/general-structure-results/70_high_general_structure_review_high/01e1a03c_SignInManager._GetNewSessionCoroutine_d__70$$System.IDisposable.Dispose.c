/*
FUNCTION_NAME: SignInManager.<GetNewSessionCoroutine>d__70$$System.IDisposable.Dispose
ENTRY_POINT: 01e1a03c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void SignInManager_<GetNewSessionCoroutine>d__70__System_IDisposable_Dispose
               (ulong param_1,long param_2)

{
  ulong uVar1;
  long unaff_x20;
  undefined8 uVar2;
  long unaff_x21;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  
  puVar3 = *(undefined8 **)(unaff_x21 + 400);
  if ((param_1 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_04231ee0);
    FUN_01c5d288(PTR_DAT_042369f8);
    FUN_01c5d288(PTR_DAT_04236a00);
    FUN_01c5d288(PTR_DAT_04236a08);
    FUN_01c5d288(PTR_DAT_04233190);
    *(undefined1 *)(unaff_x20 + 0x25) = 1;
  }
  fVar4 = (float)FUN_03d9be44(*puVar3,0);
  fVar5 = (float)FUN_03d52384(0);
  fVar5 = fVar4 * 10.0 * fVar5;
  if (fVar5 == 0.0) {
    if (*(float *)(param_2 + 0x38) != 0.0) {
      uVar2 = *(undefined8 *)(param_2 + 0x30);
      puVar3 = (undefined8 *)PTR_DAT_04236a00;
      if (*(int *)(*(long *)PTR_DAT_04231ee0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        puVar3 = (undefined8 *)PTR_DAT_04236a00;
      }
LAB_01e1a118:
      FUN_01dd6fd0(*puVar3,uVar2,1,0);
    }
  }
  else if (*(float *)(param_2 + 0x38) == 0.0) {
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    puVar3 = (undefined8 *)PTR_DAT_04236a08;
    if (*(int *)(*(long *)PTR_DAT_04231ee0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      puVar3 = (undefined8 *)PTR_DAT_04236a08;
    }
    goto LAB_01e1a118;
  }
  *(float *)(param_2 + 0x38) = fVar5;
  if (*(long *)(param_2 + 0x30) != 0) {
    fVar4 = (float)FUN_03d554d8(*(long *)(param_2 + 0x30),0);
    if (*(long *)(param_2 + 0x30) != 0) {
      FUN_03d55578(fVar5 + fVar4,*(long *)(param_2 + 0x30),0);
      if ((*(char *)(param_2 + 0x28) != '\0') && (uVar1 = FUN_03d9c18c(0,0), (uVar1 & 1) != 0)) {
        if (*(long *)(param_2 + 0x30) == 0) goto LAB_01e1a1e4;
        FUN_03d554d8(*(long *)(param_2 + 0x30),0);
        uVar2 = *(undefined8 *)(param_2 + 0x30);
        if (*(int *)(*(long *)PTR_DAT_04231ee0 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_01ddc858(0x3f800000,0,*(undefined8 *)PTR_DAT_042369f8,uVar2,0,0,0,0,0,0);
      }
      return;
    }
  }
LAB_01e1a1e4:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


