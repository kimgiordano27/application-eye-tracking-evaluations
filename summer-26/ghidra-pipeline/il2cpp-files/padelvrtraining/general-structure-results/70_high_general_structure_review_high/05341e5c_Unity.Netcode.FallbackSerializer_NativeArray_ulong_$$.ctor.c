/*
FUNCTION_NAME: Unity.Netcode.FallbackSerializer<NativeArray<ulong>>$$.ctor
ENTRY_POINT: 05341e5c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


long * Unity_Netcode_FallbackSerializer<NativeArray<ulong>>___ctor
                 (long param_1,undefined8 param_2,long param_3)

{
  bool in_CY;
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long in_x9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar7;
  long *unaff_x24;
  long *unaff_x25;
  
  if ((!in_CY) || (*(long *)(*(long *)(param_1 + 200) + in_x9 * 8 + -8) != param_3)) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d8e4();
  }
  uVar7 = *(undefined8 *)PTR_StringLiteral_50152_091fbe00;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  plVar2 = (long *)FUN_07186ef4(uVar7,0);
  lVar3 = FUN_03d2d394(*(undefined8 *)PTR_DAT_091ab540,1);
  if (lVar3 != 0) {
    if ((unaff_x21 != 0) && (lVar4 = thunk_FUN_03d2ee44(), lVar4 == 0)) {
      uVar7 = thunk_FUN_03d3c630();
                    /* WARNING: Subroutine does not return */
      FUN_03d2d414(uVar7,0);
    }
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    *(long *)(lVar3 + 0x20) = unaff_x21;
    thunk_FUN_03d1023c();
    if ((plVar2 != (long *)0x0) &&
       (plVar2 = (long *)(**(code **)(*plVar2 + 0x9a8))
                                   (plVar2,lVar3,*(undefined8 *)(*plVar2 + 0x9b0)),
       plVar2 != (long *)0x0)) {
      uVar5 = (**(code **)(*plVar2 + 0x2b8))();
      if ((uVar5 & 1) == 0) {
        uVar5 = (**(code **)(*unaff_x20 + 0x5c8))();
        if ((uVar5 & 1) == 0) {
switchD_05341ff4_default:
          lVar3 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_03d8f26c();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_03d8f26c();
          }
          plVar2 = (long *)thunk_FUN_03d2ef40();
          lVar3 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_03d8f26c(lVar3);
          }
          FUN_05f8ce1c(plVar2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
          return plVar2;
        }
        if (*(int *)(*(long *)PTR_DAT_091a1bb0 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        uVar7 = FUN_071ad060();
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_03db619c(*unaff_x25);
        }
        uVar1 = FUN_07193098(uVar7,0);
        switch(uVar1) {
        case 5:
          lVar3 = *unaff_x25;
          puVar6 = (undefined8 *)PTR_StringLiteral_50731_091fbe28;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          plVar2 = (long *)FUN_08cafdc4(&PTR_DAT_091fb000,*unaff_x25);
          return plVar2;
        case 7:
          lVar3 = *unaff_x25;
          puVar6 = (undefined8 *)PTR_StringLiteral_50783_091fbe30;
          break;
        case 0xb:
        case 0xc:
          lVar3 = *unaff_x25;
          puVar6 = (undefined8 *)PTR_StringLiteral_50383_091fbe10;
          break;
        default:
          goto switchD_05341ff4_default;
        }
        uVar7 = *puVar6;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        uVar7 = FUN_07186ef4(uVar7,0);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_03db619c(*unaff_x24);
        }
      }
      else {
        uVar7 = *(undefined8 *)PTR_StringLiteral_50482_091fbe18;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        uVar7 = FUN_07186ef4(uVar7,0);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_03db619c(*unaff_x24);
        }
      }
      plVar2 = (long *)FUN_071bb0f0(uVar7);
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03d8f26c(lVar3);
      }
      lVar3 = **(long **)(lVar3 + 0xc0);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03d8f26c(lVar3);
      }
      if (plVar2 != (long *)0x0) {
        if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
           (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3)
           ) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d8e4(plVar2);
        }
      }
      return plVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


