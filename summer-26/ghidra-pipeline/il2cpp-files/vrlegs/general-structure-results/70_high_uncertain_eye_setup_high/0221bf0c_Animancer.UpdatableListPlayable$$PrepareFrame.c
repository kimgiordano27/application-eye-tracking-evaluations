/*
FUNCTION_NAME: Animancer.UpdatableListPlayable$$PrepareFrame
ENTRY_POINT: 0221bf0c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
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

void Animancer_UpdatableListPlayable__PrepareFrame(void)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long lVar13;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  lVar9 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x100);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01a46ff8(lVar9);
  }
  lVar10 = *unaff_x22;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar9) {
        puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto Animancer_UpdatableListPlayable___ctor;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar5 = (undefined8 *)FUN_01a472ec();
Animancer_UpdatableListPlayable___ctor:
  plVar6 = (long *)(*(code *)*puVar5)();
  puVar4 = PTR_DAT_03cdbdb0;
  puVar3 = PTR_DAT_03cbed20;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  do {
    lVar9 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto Animancer_WeightedMaskLayerList__get_BoneWeights;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01a472ec(plVar6,*(long *)puVar3,0);
Animancer_WeightedMaskLayerList__get_BoneWeights:
    uVar11 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar11 & 1) == 0) {
      if (plVar6 == (long *)0x0) goto LAB_0221c29c;
      lVar9 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 == 0) goto LAB_0221c274;
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x110);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01a46ff8(lVar9);
    }
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          lVar9 = lVar10 + (long)*piVar12 * 0x10 + 0x138;
          goto LAB_0221c05c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    lVar9 = FUN_01a472ec(plVar6,lVar9,0);
LAB_0221c05c:
    lVar9 = *(long *)(lVar9 + 8);
    (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,plVar6,0,&stack0x00000008);
    if (*(long *)(unaff_x20 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar9 = FUN_0221a510();
    if (lVar9 == 0) {
      iVar1 = *(int *)(unaff_x20 + 0x134);
      *(int *)(unaff_x20 + 0x134) = iVar1 + 1;
      if (iVar1 == 0) {
        plVar8 = *(long **)(unaff_x20 + 0x78);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar9 = *plVar8;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_0221c21c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_01a472ec(plVar8,*(long *)puVar4,2);
LAB_0221c21c:
        (*(code *)*puVar5)(plVar8,puVar5[1]);
      }
    }
    else {
      *(undefined4 *)(unaff_x20 + 0x134) = 0;
      lVar13 = *(long *)(unaff_x20 + 0x78);
      lVar10 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01a46ff8(lVar10);
      }
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar7 = thunk_FUN_01a89d6c(lVar13,lVar10);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(lVar13,lVar10);
      }
      lVar10 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      uVar2 = *(ushort *)(lVar10 + 0x135);
      lVar7 = lVar10;
      if ((uVar2 & 1) == 0) {
        lVar7 = FUN_01a46ff8(lVar10);
        lVar10 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
        uVar2 = *(ushort *)(lVar10 + 0x135);
      }
      if ((uVar2 & 1) == 0) {
        lVar10 = FUN_01a46ff8(lVar10);
      }
      plVar8 = (long *)thunk_FUN_01a89d6c(lVar13,lVar10);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(lVar13,lVar10);
      }
      lVar10 = *plVar8;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar7) {
            lVar10 = lVar10 + (long)*piVar12 * 0x10 + 0x138;
            goto LAB_0221c1ec;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      lVar10 = FUN_01a472ec(plVar8,lVar7,0);
LAB_0221c1ec:
      lVar10 = *(long *)(lVar10 + 8);
      in_stack_00000008 = lVar9;
      (**(code **)(lVar10 + 0x10))(*(undefined8 *)(lVar10 + 8),lVar10,plVar8,&stack0x00000008,lVar9)
      ;
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_03cbed08) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0221c290;
    }
  }
LAB_0221c274:
  puVar5 = (undefined8 *)FUN_01a472ec(plVar6,*(long *)PTR_DAT_03cbed08,0);
LAB_0221c290:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_0221c29c:
  if (in_stack_00000000._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return;
}


