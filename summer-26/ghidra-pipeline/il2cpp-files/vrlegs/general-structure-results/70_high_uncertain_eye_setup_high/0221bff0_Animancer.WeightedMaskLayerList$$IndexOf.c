/*
FUNCTION_NAME: Animancer.WeightedMaskLayerList$$IndexOf
ENTRY_POINT: 0221bff0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0221c38c) */
/* WARNING: Removing unreachable block (ram,0x0221c408) */
/* WARNING: Removing unreachable block (ram,0x0221c410) */
/* WARNING: Removing unreachable block (ram,0x0221c41c) */
/* WARNING: Removing unreachable block (ram,0x0221c428) */
/* WARNING: Removing unreachable block (ram,0x0221c3b4) */
/* WARNING: Removing unreachable block (ram,0x0221c3c0) */
/* WARNING: Removing unreachable block (ram,0x0221c2a4) */
/* WARNING: Removing unreachable block (ram,0x0221c2b4) */
/* WARNING: Removing unreachable block (ram,0x0221c44c) */
/* WARNING: Removing unreachable block (ram,0x0221c2bc) */
/* WARNING: Removing unreachable block (ram,0x0221c2d4) */
/* WARNING: Removing unreachable block (ram,0x0221c2dc) */
/* WARNING: Removing unreachable block (ram,0x0221c30c) */
/* WARNING: Removing unreachable block (ram,0x0221c2e8) */
/* WARNING: Removing unreachable block (ram,0x0221c2f4) */
/* WARNING: Removing unreachable block (ram,0x0221c31c) */
/* WARNING: Removing unreachable block (ram,0x0221c328) */
/* WARNING: Removing unreachable block (ram,0x0221c420) */
/* WARNING: Removing unreachable block (ram,0x0221c444) */

void Animancer_WeightedMaskLayerList__IndexOf(ulong param_1)

{
  int iVar1;
  ushort uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long lVar10;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  while ((param_1 & 1) != 0) {
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x110);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01a46ff8(lVar6);
    }
    lVar7 = *unaff_x22;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          lVar6 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
          goto LAB_0221c05c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    lVar6 = FUN_01a472ec();
LAB_0221c05c:
    (**(code **)(*(long *)(lVar6 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar6 + 8) + 8));
    if (*(long *)(unaff_x20 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar6 = FUN_0221a510();
    if (lVar6 == 0) {
      iVar1 = *(int *)(unaff_x20 + 0x134);
      *(int *)(unaff_x20 + 0x134) = iVar1 + 1;
      if (iVar1 == 0) {
        plVar5 = *(long **)(unaff_x20 + 0x78);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar6 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x29) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_0221c21c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)FUN_01a472ec(plVar5,*unaff_x29,2);
LAB_0221c21c:
        (*(code *)*puVar3)(plVar5,puVar3[1]);
      }
    }
    else {
      *(undefined4 *)(unaff_x20 + 0x134) = 0;
      lVar10 = *(long *)(unaff_x20 + 0x78);
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01a46ff8(lVar7);
      }
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar4 = thunk_FUN_01a89d6c(lVar10,lVar7);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(lVar10,lVar7);
      }
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      uVar2 = *(ushort *)(lVar7 + 0x135);
      lVar4 = lVar7;
      if ((uVar2 & 1) == 0) {
        lVar4 = FUN_01a46ff8(lVar7);
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
        uVar2 = *(ushort *)(lVar7 + 0x135);
      }
      if ((uVar2 & 1) == 0) {
        lVar7 = FUN_01a46ff8(lVar7);
      }
      plVar5 = (long *)thunk_FUN_01a89d6c(lVar10,lVar7);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(lVar10,lVar7);
      }
      lVar7 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar4) {
            lVar7 = lVar7 + (long)*piVar9 * 0x10 + 0x138;
            goto LAB_0221c1ec;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      lVar7 = FUN_01a472ec(plVar5,lVar4,0);
LAB_0221c1ec:
      lVar7 = *(long *)(lVar7 + 8);
      in_stack_00000008 = lVar6;
      (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar5,&stack0x00000008,lVar6);
    }
    lVar6 = *unaff_x22;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x28) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto Animancer_WeightedMaskLayerList__get_BoneWeights;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01a472ec();
Animancer_WeightedMaskLayerList__get_BoneWeights:
    param_1 = (*(code *)*puVar3)();
  }
  if (unaff_x22 != (long *)0x0) {
    lVar6 = *unaff_x22;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03cbed08) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0221c290;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01a472ec();
LAB_0221c290:
    (*(code *)*puVar3)();
  }
  if (in_stack_00000000._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return;
}


