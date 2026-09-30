/*
FUNCTION_NAME: FUN_03bc6118
ENTRY_POINT: 03bc6118
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03bc62cc) */

void FUN_03bc6118(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  
  if ((DAT_0483996a & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_13403);
    thunk_FUN_01efb3a4(StringLiteral_11898);
    DAT_0483996a = 1;
  }
  puVar4 = StringLiteral_13403;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  uVar5 = FUN_03bd0df0(param_1);
  FUN_03bd2a34();
  plVar6 = (long *)FUN_03b2468c(0);
  lVar12 = (long)(int)uVar5;
  while( true ) {
    lVar9 = *(long *)(*(long *)puVar4 + 0xb8);
    lVar8 = *(long *)(lVar9 + 0x20);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(uint *)(lVar8 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    iVar1 = *(int *)(lVar8 + lVar12 * 0xb8 + 0x48);
    if (iVar1 < 1) break;
    lVar9 = *(long *)(lVar9 + 0x28);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = (iVar1 + *(int *)(lVar8 + lVar12 * 0xb8 + 0x4c)) - 1;
    if (*(uint *)(lVar9 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    FUN_03bc8fb8(param_1,*(undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20));
  }
  if (plVar6 != (long *)0x0) {
    lVar8 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03bc6250;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_03bc6250:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  lVar8 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (uVar5 < *(uint *)(lVar8 + 0x18)) {
    if (*(char *)(lVar8 + lVar12 * 0xb8 + 0x58) == '\0') {
      return;
    }
    FUN_03bd21f8(uVar5,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


