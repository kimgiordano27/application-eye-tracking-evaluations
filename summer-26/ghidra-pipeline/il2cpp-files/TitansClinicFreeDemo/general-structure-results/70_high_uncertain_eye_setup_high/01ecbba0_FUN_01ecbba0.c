/*
FUNCTION_NAME: FUN_01ecbba0
ENTRY_POINT: 01ecbba0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_01ecbba0(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  
  if ((DAT_0293d81c & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b39e0);
    thunk_FUN_01279b34(PTR_DAT_027bbbb0);
    thunk_FUN_01279b34(PTR_DAT_027bbc60);
    thunk_FUN_01279b34(PTR_DAT_027bbfa0);
    DAT_0293d81c = 1;
  }
  if (*(long *)(param_1 + 0x88) == 0) {
LAB_01ecbfcc:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  plVar3 = (long *)FUN_01eccae8();
  if ((plVar3 != (long *)0x0) && (*plVar3 != *(long *)PTR_DAT_027bbc60)) {
                    /* WARNING: Subroutine does not return */
    FUN_01230f60(plVar3);
  }
  if (param_2 == 0) goto LAB_01ecbfcc;
  if (*(int *)(param_2 + 0x1c) == 3) {
    FUN_01eccf40(param_1,param_2);
    return;
  }
  plVar9 = (long *)(param_2 + 0x48);
  plVar4 = plVar3;
  if (*plVar9 == 0) {
    if ((plVar3 == (long *)0x0) || (plVar4 = (long *)plVar3[0x1b], plVar4 == (long *)0x0))
    goto LAB_01ecbfcc;
    if (*(char *)((long)plVar4 + 0x2e) != '\0') {
      uVar6 = FUN_01ec9a78(plVar4,*(undefined8 *)(param_2 + 0x28));
      *(undefined8 *)(param_2 + 0x48) = uVar6;
      plVar4 = (long *)thunk_FUN_01286abc(plVar9,uVar6);
      lVar11 = *(long *)(param_2 + 0x48);
      if (lVar11 != 0) {
        if (*(int *)(*(long *)PTR_DAT_027bbbb0 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        plVar4 = (long *)FUN_01ebf7d8(lVar11,0);
        *(int *)(param_2 + 0x50) = (int)plVar4;
      }
    }
  }
  puVar2 = PTR_DAT_027bbbb0;
  switch(*(undefined4 *)(param_2 + 0x20)) {
  case 1:
    lVar7 = *plVar9;
    lVar11 = *(long *)PTR_DAT_027bbbb0;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01220628();
      lVar11 = *(long *)puVar2;
    }
    lVar10 = *(long *)(lVar11 + 0xb8);
    if (lVar7 == *(long *)(lVar10 + 0x38)) {
      FUN_01ecd740(param_1,param_2,plVar3);
      if ((plVar3 == (long *)0x0) || (lVar11 = plVar3[0x1b], lVar11 == 0)) goto LAB_01ecbfcc;
      lVar7 = *(long *)(param_2 + 0x30);
    }
    else {
      iVar1 = *(int *)(param_2 + 0x50);
      if (iVar1 == 0) {
        if (*(int *)(param_2 + 0x18) == 4) {
          if (plVar3 != (long *)0x0) {
            lVar11 = plVar3[0x1b];
            uVar6 = *(undefined8 *)(param_2 + 0x28);
            uVar8 = *(undefined8 *)(param_2 + 0x30);
            if (*(int *)(*(long *)PTR_DAT_027b39e0 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            lVar7 = FUN_01e89774(uVar8,0);
            if (lVar11 != 0) goto LAB_01ecbec0;
          }
          goto LAB_01ecbfcc;
        }
        lVar7 = *plVar9;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01220628();
          lVar10 = *(long *)(*(long *)puVar2 + 0xb8);
        }
        if (lVar7 == *(long *)(lVar10 + 0xc0)) goto LAB_01ecbfe4;
        FUN_01ecd740(param_1,param_2,plVar3);
        lVar7 = *(long *)(param_2 + 0x48);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        if (plVar3 == (long *)0x0) goto LAB_01ecbfcc;
        lVar11 = plVar3[0x1b];
        if (lVar7 != *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 200)) {
          if (lVar11 != 0) {
            if (*(char *)(lVar11 + 0x2c) == '\0') {
              return;
            }
            uVar6 = *(undefined8 *)(param_2 + 0x28);
            lVar7 = *(long *)(param_2 + 0x30);
            goto LAB_01ecbec0;
          }
          goto LAB_01ecbfcc;
        }
        if (lVar11 == 0) goto LAB_01ecbfcc;
        lVar7 = *(long *)(param_2 + 0x48);
      }
      else {
        lVar7 = *(long *)(param_2 + 0x38);
        if (lVar7 == 0) {
          uVar6 = *(undefined8 *)(param_2 + 0x30);
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          lVar7 = FUN_01ec47b4(uVar6,iVar1,0);
        }
        if ((plVar3 == (long *)0x0) || (lVar11 = plVar3[0x1b], lVar11 == 0)) goto LAB_01ecbfcc;
      }
    }
    break;
  case 2:
    FUN_01ecb63c(param_1,param_2);
    if (*(long *)(param_1 + 0x88) == 0) goto LAB_01ecbfcc;
    FUN_01ec8d38(*(long *)(param_1 + 0x88),param_2);
    if (((*(long *)(param_2 + 0xd8) != 0) &&
        (lVar11 = *(long *)(*(long *)(param_2 + 0xd8) + 0x18), lVar11 != 0)) &&
       (uVar5 = OVRPlugin__set_tiledMultiResLevel(lVar11,0), (uVar5 & 1) != 0)) {
      *(undefined1 *)(param_2 + 0xe0) = 1;
      lVar11 = FUN_01eca5b8(param_1);
      if (plVar3 != (long *)0x0) {
        lVar10 = plVar3[0x1d];
        uVar8 = *(undefined8 *)(param_2 + 0x28);
        lVar7 = plVar3[0x1b];
        uVar6 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027bbfa0);
        FUN_01ecdba8(uVar6,lVar10,uVar8,lVar7);
        if (lVar11 != 0) {
          FUN_01ec8d38(lVar11,uVar6);
          return;
        }
      }
      goto LAB_01ecbfcc;
    }
    if ((plVar3 == (long *)0x0) || (lVar11 = plVar3[0x1b], lVar11 == 0)) goto LAB_01ecbfcc;
    lVar7 = *(long *)(param_2 + 0xe8);
    break;
  case 3:
    plVar4 = *(long **)(param_1 + 0x30);
    if (((plVar4 != (long *)0x0) &&
        (lVar7 = (**(code **)(*plVar4 + 0x178))
                           (plVar4,*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(*plVar4 + 0x180))
        , plVar3 != (long *)0x0)) && (lVar11 = plVar3[0x1b], lVar11 != 0)) {
      uVar6 = *(undefined8 *)(param_2 + 0x28);
      if (lVar7 != 0) goto LAB_01ecbec0;
      FUN_01ec9c0c(lVar11,uVar6,0,plVar3 + 0x22,plVar3 + 0x21);
      if (plVar3[0x1b] != 0) {
        FUN_01ec9da0(plVar3[0x1b],plVar3[0xb],*(undefined8 *)(param_2 + 0x28),
                     *(undefined8 *)(param_2 + 0x60));
        return;
      }
    }
    goto LAB_01ecbfcc;
  case 4:
    if ((plVar3 == (long *)0x0) || (lVar11 = plVar3[0x1b], lVar11 == 0)) goto LAB_01ecbfcc;
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    lVar7 = 0;
    goto LAB_01ecbec0;
  default:
    FUN_01ecc13c(plVar4,param_2,plVar3);
LAB_01ecbfe4:
    uVar6 = thunk_FUN_01279b34(PTR_DAT_027b3650);
    uVar6 = FUN_01230af8(uVar6,1);
    FUN_0103b050(param_2);
    uVar8 = *(undefined8 *)(param_2 + 0x28);
    FUN_0103b050(uVar6);
    FUN_0103b3ac(uVar6,uVar8);
    FUN_0103b3e0(uVar6,0,uVar8);
    uVar8 = thunk_FUN_01279b34(PTR_DAT_027bbfa8);
    uVar6 = FUN_01f9b348(uVar8,uVar6,0);
    thunk_FUN_01279b34(PTR_DAT_027b5260);
    uVar8 = thunk_FUN_0124bba8();
    FUN_01eb38e0(uVar8,uVar6,0);
    uVar6 = thunk_FUN_01279b34(PTR_DAT_027bbfb0);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar8,uVar6);
  }
  uVar6 = *(undefined8 *)(param_2 + 0x28);
LAB_01ecbec0:
  FUN_01ec9c0c(lVar11,uVar6,lVar7,plVar3 + 0x22,plVar3 + 0x21);
  return;
}


