/*
FUNCTION_NAME: OVRPlugin$$CancelFuture
ENTRY_POINT: 033d57c4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__CancelFuture(void)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long *unaff_x19;
  long unaff_x22;
  
  FUN_01d7d918(StringLiteral_8804);
  FUN_01d7d918(StringLiteral_6073);
  FUN_01d7d918(StringLiteral_6087);
  FUN_01d7d918(StringLiteral_9042);
  FUN_01d7d918(
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              );
  FUN_01d7d918(StringLiteral_9043);
  FUN_01d7d918(StringLiteral_9044);
  FUN_01d7d918(StringLiteral_6197);
  uVar1 = FUN_01d7d918(StringLiteral_3161);
  *(undefined1 *)(unaff_x22 + 0xa43) = 1;
  puVar6 = (undefined8 *)StringLiteral_3161;
  switch((int)unaff_x19[9]) {
  case 1:
    plVar2 = (long *)StringLiteral_8804;
    goto LAB_033d5880;
  case 2:
    plVar2 = (long *)StringLiteral_4821;
    goto LAB_033d5880;
  case 3:
    plVar2 = (long *)StringLiteral_6073;
LAB_033d5880:
    lVar5 = *plVar2;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar5 = *plVar2;
    }
    return **(undefined8 **)(lVar5 + 0xb8);
  case 4:
    lVar5 = unaff_x19[7];
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x10) != 0)) {
      lVar7 = unaff_x19[8];
      if (lVar7 != 0) {
        if (*(int *)(lVar7 + 0x10) == 0) {
          if (*(int *)(*(long *)
                        Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                      + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar3 = FUN_01d7de74(lVar5,1,0,*(undefined8 *)StringLiteral_9042,
                               *(undefined8 *)StringLiteral_9043);
          return uVar3;
        }
        plVar2 = (long *)FUN_03310104(lVar7,0);
        if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033d58f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)(*plVar2 + 0x288))
                            (plVar2,unaff_x19[7],1,0,*(undefined8 *)(*plVar2 + 0x290));
          return uVar3;
        }
        goto LAB_033d5c3c;
      }
LAB_033d5c40:
      uVar1 = 0;
      puVar6 = (undefined8 *)StringLiteral_6197;
    }
    break;
  case 5:
    if ((unaff_x19[7] != 0) && (*(int *)(unaff_x19[7] + 0x10) != 0)) {
      if (unaff_x19[8] != 0) {
        plVar2 = (long *)FUN_03310104(unaff_x19[8],0);
        if (plVar2 == (long *)0x0) goto LAB_033d5c3c;
        uVar3 = (**(code **)(*plVar2 + 0x298))(plVar2,unaff_x19[7],*(undefined8 *)(*plVar2 + 0x2a0))
        ;
        if (*(int *)(*(long *)StringLiteral_6087 + 0xe0) == 0) {
          thunk_FUN_01dc4f30(*(long *)StringLiteral_6087);
        }
        uVar1 = FUN_03309598(uVar3,0,0);
        if ((uVar1 & 1) == 0) {
          return uVar3;
        }
        uVar3 = thunk_FUN_01dd295c(StringLiteral_887);
        uVar3 = FUN_01d7d9bc(uVar3,2);
        lVar5 = unaff_x19[7];
        FUN_01a94b18();
        FUN_01a952f4(uVar3,lVar5);
        FUN_01a95328(uVar3,0,lVar5);
        lVar5 = unaff_x19[8];
        FUN_01a94b18(uVar3);
        FUN_01a952f4(uVar3,lVar5);
        FUN_01a95328(uVar3,1,lVar5);
        uVar4 = thunk_FUN_01dd295c(StringLiteral_9045);
        uVar3 = FUN_033d6e50(uVar4,uVar3,0);
        thunk_FUN_01dd295c(StringLiteral_3089);
        uVar4 = thunk_FUN_01de27b8();
        FUN_032d63a8(uVar4,uVar3,0);
        goto LAB_033d5c8c;
      }
      goto LAB_033d5c40;
    }
    break;
  case 6:
    if ((unaff_x19[7] != 0) && (*(int *)(unaff_x19[7] + 0x10) != 0)) {
      if (unaff_x19[8] != 0) {
        uVar3 = FUN_03310104(unaff_x19[8],0);
        return uVar3;
      }
      goto LAB_033d5c40;
    }
    break;
  case 7:
    uVar1 = FUN_03308638(unaff_x19[6],0,0);
    if ((uVar1 & 1) != 0) {
      lVar5 = unaff_x19[5];
      if (*(int *)(*(long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                  + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar1 = FUN_033aa3b4(lVar5,0,0);
      puVar6 = (undefined8 *)StringLiteral_9044;
      if ((uVar1 & 1) != 0) break;
    }
    uVar1 = FUN_03308620(unaff_x19[6],0,0);
    if ((uVar1 & 1) == 0) {
      plVar2 = (long *)unaff_x19[5];
      if ((plVar2 == (long *)0x0) ||
         (lVar5 = (**(code **)(*plVar2 + 0x458))(plVar2,*(undefined8 *)(*plVar2 + 0x460)),
         lVar5 == 0)) goto LAB_033d5c3c;
      if (*(uint *)(lVar5 + 0x18) <= *(uint *)(unaff_x19 + 4)) goto LAB_033d5c50;
      goto LAB_033d5c1c;
    }
    plVar2 = (long *)unaff_x19[6];
    if ((plVar2 == (long *)0x0) ||
       (lVar5 = (**(code **)(*plVar2 + 0x318))(plVar2,*(undefined8 *)(*plVar2 + 800)), lVar5 == 0))
    goto LAB_033d5c3c;
    if (*(uint *)(unaff_x19 + 4) < *(uint *)(lVar5 + 0x18)) {
      return *(undefined8 *)(lVar5 + (long)(int)*(uint *)(unaff_x19 + 4) * 8 + 0x20);
    }
    goto LAB_033d5c50;
  case 8:
    *(undefined4 *)(unaff_x19 + 9) = 4;
    plVar2 = (long *)(**(code **)(*unaff_x19 + 0x1a8))();
    lVar5 = *(long *)
             Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
    if (plVar2 == (long *)0x0) {
LAB_033d5a74:
      plVar2 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar2 + 0x130) < *(byte *)(lVar5 + 0x130)) goto LAB_033d5a74;
      if (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5) {
        plVar2 = (long *)0x0;
      }
    }
    lVar7 = unaff_x19[2];
    *(undefined4 *)(unaff_x19 + 9) = 8;
    if (lVar7 == 0) {
LAB_033d5c3c:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if (*(int *)(lVar7 + 0x18) != 0) {
      uVar3 = *(undefined8 *)(lVar7 + 0x20);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(lVar5);
      }
      uVar1 = FUN_033aa3b4(uVar3,0,0);
      if ((uVar1 & 1) != 0) {
        return 0;
      }
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x8c8))(plVar2,unaff_x19[2],*(undefined8 *)(*plVar2 + 0x8d0));
LAB_033d5c1c:
        uVar3 = FUN_033d4f94();
        return uVar3;
      }
      goto LAB_033d5c3c;
    }
    goto LAB_033d5c50;
  default:
    uVar3 = thunk_FUN_01dd295c(StringLiteral_9046);
    uVar3 = FUN_033d6e4c(uVar3,0);
    thunk_FUN_01dd295c(StringLiteral_1149);
    uVar4 = thunk_FUN_01de27b8();
    FUN_0328dba4(uVar4,uVar3,0);
LAB_033d5c8c:
    uVar3 = thunk_FUN_01dd295c(StringLiteral_9043);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar4,uVar3);
  }
  FUN_033d56a4(uVar1,*puVar6);
LAB_033d5c50:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


