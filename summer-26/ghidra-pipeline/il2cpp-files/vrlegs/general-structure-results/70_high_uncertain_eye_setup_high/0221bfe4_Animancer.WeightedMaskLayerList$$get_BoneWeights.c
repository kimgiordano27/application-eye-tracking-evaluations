/*
FUNCTION_NAME: Animancer.WeightedMaskLayerList$$get_BoneWeights
ENTRY_POINT: 0221bfe4
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

void Animancer_WeightedMaskLayerList__get_BoneWeights(undefined8 *param_1)

{
  int iVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long lVar10;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
code_r0x0221bfe4:
  uVar3 = (*(code *)*param_1)();
  if ((uVar3 & 1) != 0) {
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x110);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01a46ff8(lVar7);
    }
    lVar8 = *unaff_x22;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar7) {
          lVar7 = lVar8 + (long)*piVar9 * 0x10 + 0x138;
          goto LAB_0221c05c;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    lVar7 = FUN_01a472ec();
LAB_0221c05c:
    (**(code **)(*(long *)(lVar7 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar7 + 8) + 8));
    if (*(long *)(unaff_x20 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar7 = FUN_0221a510();
    if (lVar7 == 0) {
      iVar1 = *(int *)(unaff_x20 + 0x134);
      *(int *)(unaff_x20 + 0x134) = iVar1 + 1;
      if (iVar1 == 0) {
        plVar6 = *(long **)(unaff_x20 + 0x78);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar7 = *plVar6;
        uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar3 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x29) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_0221c21c;
            }
            uVar3 = uVar3 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)FUN_01a472ec(plVar6,*unaff_x29,2);
LAB_0221c21c:
        (*(code *)*puVar5)(plVar6,puVar5[1]);
      }
    }
    else {
      *(undefined4 *)(unaff_x20 + 0x134) = 0;
      lVar10 = *(long *)(unaff_x20 + 0x78);
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01a46ff8(lVar8);
      }
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar4 = thunk_FUN_01a89d6c(lVar10,lVar8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(lVar10,lVar8);
      }
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      uVar2 = *(ushort *)(lVar8 + 0x135);
      lVar4 = lVar8;
      if ((uVar2 & 1) == 0) {
        lVar4 = FUN_01a46ff8(lVar8);
        lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
        uVar2 = *(ushort *)(lVar8 + 0x135);
      }
      if ((uVar2 & 1) == 0) {
        lVar8 = FUN_01a46ff8(lVar8);
      }
      plVar6 = (long *)thunk_FUN_01a89d6c(lVar10,lVar8);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(lVar10,lVar8);
      }
      lVar8 = *plVar6;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar4) {
            lVar8 = lVar8 + (long)*piVar9 * 0x10 + 0x138;
            goto LAB_0221c1ec;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      lVar8 = FUN_01a472ec(plVar6,lVar4,0);
LAB_0221c1ec:
      lVar8 = *(long *)(lVar8 + 8);
      in_stack_00000008 = lVar7;
      (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar6,&stack0x00000008,lVar7);
    }
    lVar7 = *unaff_x22;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x28) {
          param_1 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto code_r0x0221bfe4;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    param_1 = (undefined8 *)FUN_01a472ec();
    goto code_r0x0221bfe4;
  }
  if (unaff_x22 != (long *)0x0) {
    lVar7 = *unaff_x22;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03cbed08) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0221c290;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_01a472ec();
LAB_0221c290:
    (*(code *)*puVar5)();
  }
  if (in_stack_00000000._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return;
}


