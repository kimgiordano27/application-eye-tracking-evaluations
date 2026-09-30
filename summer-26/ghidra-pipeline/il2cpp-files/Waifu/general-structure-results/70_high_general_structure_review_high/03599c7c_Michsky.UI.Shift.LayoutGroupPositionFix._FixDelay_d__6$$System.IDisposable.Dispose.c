/*
FUNCTION_NAME: Michsky.UI.Shift.LayoutGroupPositionFix.<FixDelay>d__6$$System.IDisposable.Dispose
ENTRY_POINT: 03599c7c
PROGRAM: Waifu-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void Michsky_UI_Shift_LayoutGroupPositionFix_<FixDelay>d__6__System_IDisposable_Dispose
               (undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined4 *puVar5;
  long unaff_x19;
  long unaff_x23;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
  FUN_0335b6c8(param_1,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x23 + 0xc56) = 1;
  lVar4 = *(long *)(DAT_083d2c90 + 0xb8);
  fVar7 = *(float *)(lVar4 + 0x18);
  fVar8 = *(float *)(lVar4 + 0x1c);
  fVar9 = *(float *)(lVar4 + 0x20);
  if (DAT_086d7c53 == '\0') {
    FUN_0335b6c8(&DAT_083d0300,1);
    DataMemoryBarrier(2,3);
    DAT_086d7c53 = '\x01';
  }
  puVar5 = *(undefined4 **)(DAT_083d0300 + 0xb8);
  lVar4 = FUN_035dc5a8(unaff_s8 + fVar7,unaff_s9 + fVar8,unaff_s10 + fVar9,*puVar5,puVar5[1],
                       puVar5[2],puVar5[3]);
  if (lVar4 == 0) goto LAB_0359a01c;
  if (DAT_086ef250 == (code *)0x0) {
    DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
  }
  lVar2 = (*DAT_086ef250)(lVar4);
  if (lVar2 == 0) goto LAB_0359a01c;
  uVar6 = *(undefined8 *)(unaff_x19 + 0x40);
  if (DAT_086ef840 == (code *)0x0) {
    DAT_086ef840 = (code *)FUN_033d1b68(
                                       "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                       );
  }
  (*DAT_086ef840)(lVar2,uVar6,1);
  if (DAT_086ef250 == (code *)0x0) {
    DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
  }
  lVar2 = (*DAT_086ef250)(lVar4);
  if (DAT_086d7cc6 == '\0') {
    FUN_0335b6c8(&DAT_083d2c90,1);
    DataMemoryBarrier(2,3);
    DAT_086d7cc6 = '\x01';
  }
  if (lVar2 == 0) goto LAB_0359a01c;
  puVar5 = *(undefined4 **)(DAT_083d2c90 + 0xb8);
  FUN_07a18dcc(*puVar5,puVar5[1],puVar5[2],lVar2,0);
  plVar3 = (long *)FUN_03fa1bc8(lVar4,DAT_0840cd68);
  uVar6 = FUN_0682c29c(&stack0x0000000c,0);
  if (plVar3 == (long *)0x0) goto LAB_0359a01c;
  (**(code **)(*plVar3 + 0x5e8))(plVar3,uVar6,*(undefined8 *)(*plVar3 + 0x5f0));
  if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_0359a01c;
  FUN_07c91e48(plVar3,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x80),0);
  if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_0359a01c;
  FUN_07c92410(plVar3,*(undefined4 *)(*(long *)(unaff_x19 + 0x38) + 0x88),0);
  lVar4 = FUN_03fa1bc8(lVar4,DAT_0840cc88);
  if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_0359a01c;
  iVar1 = *(int *)(*(long *)(unaff_x19 + 0x38) + 0x98);
  if (iVar1 == 1) {
    if (lVar4 == 0) goto LAB_0359a01c;
    if (DAT_086ef168 == (code *)0x0) {
      DAT_086ef168 = (code *)FUN_033d1b68("UnityEngine.Behaviour::set_enabled(System.Boolean)");
    }
    uVar6 = 0;
LAB_03599ed4:
    (*DAT_086ef168)(lVar4,uVar6);
  }
  else if (iVar1 == 0) {
    if (lVar4 == 0) goto LAB_0359a01c;
    if (DAT_086ef168 == (code *)0x0) {
      DAT_086ef168 = (code *)FUN_033d1b68("UnityEngine.Behaviour::set_enabled(System.Boolean)");
    }
    uVar6 = 1;
    goto LAB_03599ed4;
  }
  switch(*(undefined4 *)(unaff_x19 + 0x28)) {
  case 0:
    lVar4 = *(long *)(unaff_x19 + 0x38);
    if (lVar4 == 0) {
LAB_0359a01c:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    FUN_03599598(*(undefined4 *)(lVar4 + 0x4c),*(undefined4 *)(lVar4 + 0x50),
                 *(undefined4 *)(lVar4 + 0x54),*(undefined4 *)(lVar4 + 0x58),
                 *(undefined4 *)(lVar4 + 0x5c),*(undefined4 *)(lVar4 + 0x60),
                 *(undefined4 *)(lVar4 + 100),*(undefined4 *)(lVar4 + 0x68));
    break;
  case 1:
    lVar4 = *(long *)(unaff_x19 + 0x38);
    if (lVar4 == 0) goto LAB_0359a01c;
    FUN_0359971c(*(undefined4 *)(lVar4 + 0x4c),*(undefined4 *)(lVar4 + 0x50),
                 *(undefined4 *)(lVar4 + 0x54),*(undefined4 *)(lVar4 + 0x58),
                 *(undefined4 *)(lVar4 + 0x5c),*(undefined4 *)(lVar4 + 0x60),
                 *(undefined4 *)(lVar4 + 100),*(undefined4 *)(lVar4 + 0x68));
    break;
  case 2:
  case 3:
    lVar4 = *(long *)(unaff_x19 + 0x38);
    if (lVar4 == 0) goto LAB_0359a01c;
    FUN_035998a0(*(undefined4 *)(lVar4 + 0x4c),*(undefined4 *)(lVar4 + 0x50),
                 *(undefined4 *)(lVar4 + 0x54),*(undefined4 *)(lVar4 + 0x58),
                 *(undefined4 *)(lVar4 + 0x5c),*(undefined4 *)(lVar4 + 0x60),
                 *(undefined4 *)(lVar4 + 100),*(undefined4 *)(lVar4 + 0x68));
    break;
  case 4:
    lVar4 = *(long *)(unaff_x19 + 0x38);
    if (lVar4 == 0) goto LAB_0359a01c;
    FUN_03599a24(*(undefined4 *)(lVar4 + 0x4c),*(undefined4 *)(lVar4 + 0x50),
                 *(undefined4 *)(lVar4 + 0x54),*(undefined4 *)(lVar4 + 0x58),
                 *(undefined4 *)(lVar4 + 0x5c),*(undefined4 *)(lVar4 + 0x60),
                 *(undefined4 *)(lVar4 + 100),*(undefined4 *)(lVar4 + 0x68));
    break;
  default:
    return;
  }
  FUN_07a0f1b4();
  return;
}


