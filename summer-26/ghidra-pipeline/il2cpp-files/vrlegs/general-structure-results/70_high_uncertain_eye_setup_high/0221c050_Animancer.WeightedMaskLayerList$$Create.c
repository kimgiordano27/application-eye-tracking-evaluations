/*
FUNCTION_NAME: Animancer.WeightedMaskLayerList$$Create
ENTRY_POINT: 0221c050
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
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

void Animancer_WeightedMaskLayerList__Create(long param_1)

{
  int iVar1;
  ushort uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  int *in_x10;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long lVar9;
  long lVar10;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
code_r0x0221c050:
  lVar4 = param_1 + (long)*in_x10 * 0x10 + 0x138;
  do {
    (**(code **)(*(long *)(lVar4 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar4 + 8) + 8));
    if (*(long *)(unaff_x20 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar4 = FUN_0221a510();
    if (lVar4 == 0) {
      iVar1 = *(int *)(unaff_x20 + 0x134);
      *(int *)(unaff_x20 + 0x134) = iVar1 + 1;
      if (iVar1 == 0) {
        plVar6 = *(long **)(unaff_x20 + 0x78);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar4 = *plVar6;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x29) {
              puVar3 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_0221c21c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_01a472ec(plVar6,*unaff_x29,2);
LAB_0221c21c:
        (*(code *)*puVar3)(plVar6,puVar3[1]);
      }
    }
    else {
      *(undefined4 *)(unaff_x20 + 0x134) = 0;
      lVar9 = *(long *)(unaff_x20 + 0x78);
      lVar10 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01a46ff8(lVar10);
      }
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar5 = thunk_FUN_01a89d6c(lVar9,lVar10);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(lVar9,lVar10);
      }
      lVar10 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      uVar2 = *(ushort *)(lVar10 + 0x135);
      lVar5 = lVar10;
      if ((uVar2 & 1) == 0) {
        lVar5 = FUN_01a46ff8(lVar10);
        lVar10 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
        uVar2 = *(ushort *)(lVar10 + 0x135);
      }
      if ((uVar2 & 1) == 0) {
        lVar10 = FUN_01a46ff8(lVar10);
      }
      plVar6 = (long *)thunk_FUN_01a89d6c(lVar9,lVar10);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(lVar9,lVar10);
      }
      lVar10 = *plVar6;
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            lVar10 = lVar10 + (long)*piVar8 * 0x10 + 0x138;
            goto LAB_0221c1ec;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      lVar10 = FUN_01a472ec(plVar6,lVar5,0);
LAB_0221c1ec:
      lVar10 = *(long *)(lVar10 + 8);
      in_stack_00000008 = lVar4;
      (**(code **)(lVar10 + 0x10))(*(undefined8 *)(lVar10 + 8),lVar10,plVar6,&stack0x00000008,lVar4)
      ;
    }
    lVar4 = *unaff_x22;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x28) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto Animancer_WeightedMaskLayerList__get_BoneWeights;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01a472ec();
Animancer_WeightedMaskLayerList__get_BoneWeights:
    uVar7 = (*(code *)*puVar3)();
    if ((uVar7 & 1) == 0) {
      if (unaff_x22 == (long *)0x0) goto LAB_0221c29c;
      lVar4 = *unaff_x22;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 == 0) goto LAB_0221c274;
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x110);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01a46ff8(lVar4);
    }
    param_1 = *unaff_x22;
    uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar7 != 0) {
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(in_x10 + -2) == lVar4) goto code_r0x0221c050;
        uVar7 = uVar7 - 1;
        in_x10 = in_x10 + 4;
      } while (uVar7 != 0);
    }
    lVar4 = FUN_01a472ec();
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03cbed08) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0221c290;
    }
  }
LAB_0221c274:
  puVar3 = (undefined8 *)FUN_01a472ec();
LAB_0221c290:
  (*(code *)*puVar3)();
LAB_0221c29c:
  if (in_stack_00000000._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return;
}


