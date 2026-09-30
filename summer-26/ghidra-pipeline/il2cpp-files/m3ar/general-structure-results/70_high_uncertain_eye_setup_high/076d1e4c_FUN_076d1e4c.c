/*
FUNCTION_NAME: FUN_076d1e4c
ENTRY_POINT: 076d1e4c
PROGRAM: m3ar-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_076d1e4c(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long *plVar10;
  long *plVar11;
  
  if ((DAT_09548231 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f8e6f0);
    FUN_0403162c(PTR_DAT_08fadef0);
    DAT_09548231 = 1;
  }
  plVar11 = *(long **)(param_1 + 0x60);
  if (plVar11 != (long *)0x0) {
    lVar3 = *plVar11;
    plVar10 = *(long **)(param_1 + 0x38);
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08fadef0) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_076d1ee4;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar11,*(long *)PTR_DAT_08fadef0,0);
LAB_076d1ee4:
    plVar11 = (long *)(*(code *)*puVar2)(plVar11,puVar2[1]);
    if (plVar11 != (long *)0x0) {
      lVar3 = *plVar11;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f8e6f0) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
            goto OVRPlugin__GetFaceStateInternal;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_0406ae20(plVar11,*(long *)PTR_DAT_08f8e6f0,0);
OVRPlugin__GetFaceStateInternal:
      uVar5 = (*(code *)*puVar2)(plVar11,puVar2[1]);
      if ((uVar5 & 1) == 0) {
        puVar4 = (undefined4 *)(param_1 + 0x50);
        puVar6 = (undefined4 *)(param_1 + 0x54);
        puVar8 = (undefined4 *)(param_1 + 0x58);
        puVar9 = (undefined4 *)(param_1 + 0x5c);
      }
      else {
        puVar4 = (undefined4 *)(param_1 + 0x40);
        puVar6 = (undefined4 *)(param_1 + 0x44);
        puVar8 = (undefined4 *)(param_1 + 0x48);
        puVar9 = (undefined4 *)(param_1 + 0x4c);
      }
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x2a8))
                  (*puVar4,*puVar6,*puVar8,*puVar9,plVar10,*(undefined8 *)(*plVar10 + 0x2b0));
        if (*(long *)(param_1 + 0x20) != 0) {
          lVar3 = FUN_08584ab0(*(long *)(param_1 + 0x20),0);
          if ((*(long *)(param_1 + 0x20) != 0) &&
             (iVar1 = FUN_0859a678(*(long *)(param_1 + 0x20),0), lVar3 != 0)) {
            FUN_08588638(lVar3,0 < iVar1,0);
            if ((*(long *)(param_1 + 0x28) != 0) &&
               (lVar3 = FUN_08584ab0(*(long *)(param_1 + 0x28),0), lVar3 != 0)) {
              FUN_08588638(lVar3,*(char *)(param_1 + 0x68) == '\0',0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


