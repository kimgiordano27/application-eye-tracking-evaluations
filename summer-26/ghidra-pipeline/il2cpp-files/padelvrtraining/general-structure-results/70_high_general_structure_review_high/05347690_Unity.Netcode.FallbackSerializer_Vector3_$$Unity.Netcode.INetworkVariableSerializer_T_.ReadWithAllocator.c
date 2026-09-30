/*
FUNCTION_NAME: Unity.Netcode.FallbackSerializer<Vector3>$$Unity.Netcode.INetworkVariableSerializer<T>.ReadWithAllocator
ENTRY_POINT: 05347690
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


long * Unity_Netcode_FallbackSerializer<Vector3>__Unity_Netcode_INetworkVariableSerializer<T>_ReadWithAllocator
                 (long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar7;
  long unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  
  lVar2 = FUN_03d2d394(*(undefined8 *)PTR_DAT_091ab540,1);
  if (lVar2 != 0) {
    if ((unaff_x21 != 0) && (lVar3 = thunk_FUN_03d2ee44(), lVar3 == 0)) {
      uVar7 = thunk_FUN_03d3c630();
                    /* WARNING: Subroutine does not return */
      FUN_03d2d414(uVar7,0);
    }
    if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    *(long *)(lVar2 + 0x20) = unaff_x21;
    thunk_FUN_03d1023c();
    if ((param_1 != (long *)0x0) &&
       (plVar4 = (long *)(**(code **)(*param_1 + 0x9a8))
                                   (param_1,lVar2,*(undefined8 *)(*param_1 + 0x9b0)),
       plVar4 != (long *)0x0)) {
      uVar5 = (**(code **)(*plVar4 + 0x2b8))();
      if ((uVar5 & 1) == 0) {
        uVar5 = (**(code **)(*unaff_x20 + 0x5c8))();
        if ((uVar5 & 1) == 0) {
switchD_053477e8_default:
          lVar2 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_03d8f26c();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_03d8f26c();
          }
          plVar4 = (long *)thunk_FUN_03d2ef40();
          lVar2 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_03d8f26c(lVar2);
          }
          FUN_05f8eb5c(plVar4,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x38));
          return plVar4;
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
          lVar2 = *unaff_x25;
          puVar6 = (undefined8 *)PTR_StringLiteral_50731_091fbe28;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar2 = *unaff_x25;
          puVar6 = (undefined8 *)PTR_StringLiteral_49925_091fbdf0;
          break;
        case 7:
          lVar2 = *unaff_x25;
          puVar6 = (undefined8 *)PTR_StringLiteral_50783_091fbe30;
          break;
        case 0xb:
        case 0xc:
          lVar2 = *unaff_x25;
          puVar6 = (undefined8 *)PTR_StringLiteral_50383_091fbe10;
          break;
        default:
          goto switchD_053477e8_default;
        }
        uVar7 = *puVar6;
        if (*(int *)(lVar2 + 0xe0) == 0) {
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
      plVar4 = (long *)FUN_071bb0f0(uVar7);
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03d8f26c(lVar2);
      }
      lVar2 = **(long **)(lVar2 + 0xc0);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03d8f26c(lVar2);
      }
      if (plVar4 != (long *)0x0) {
        if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) != lVar2)
           ) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d8e4(plVar4);
        }
      }
      return plVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


