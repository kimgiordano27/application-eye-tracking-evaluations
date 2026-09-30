/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$Dispose
ENTRY_POINT: 061dcc64
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonReader__Dispose(long param_1,int param_2,byte param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  if ((DAT_0825b5d6 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07dacd78);
    FUN_0373b518(PTR_DAT_07dacd80);
    FUN_0373b518(PTR_DAT_07dacd88);
    FUN_0373b518(PTR_DAT_07dacd90);
    FUN_0373b518(PTR_DAT_07d8f0c8);
    DAT_0825b5d6 = 1;
  }
  puVar3 = PTR_DAT_07dacd88;
  puVar2 = PTR_DAT_07d8f0c8;
  if (param_2 < 0) {
    thunk_FUN_037a15ac(PTR_DAT_07d8eed0);
    uVar6 = thunk_FUN_037788cc();
    uVar9 = thunk_FUN_037a15ac(PTR_DAT_07da5050);
    uVar10 = thunk_FUN_037a15ac(PTR_DAT_07dacd98);
    FUN_061a5334(uVar6,uVar9,uVar10,0);
    uVar9 = thunk_FUN_037a15ac(PTR_DAT_07dacda0);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar6,uVar9);
  }
  lVar4 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07dacd90);
  FUN_049ce6c0(lVar4,*(undefined8 *)puVar3);
  plVar5 = (long *)thunk_FUN_037788cc(*(undefined8 *)puVar2);
  FUN_061dc894(plVar5,param_2 + 2,param_3 & 1);
  puVar3 = PTR_DAT_07dacd78;
  if (plVar5 == (long *)0x0) {
LAB_061dcdd8:
    *(byte *)(param_1 + 0x20) = param_3 & 1;
    if (lVar4 == 0) {
LAB_061dce18:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
  }
  else {
    param_2 = param_2 + 3;
    do {
      uVar6 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
      uVar7 = FUN_06175d8c(uVar6,0,0);
      if ((uVar7 & 1) == 0) goto LAB_061dcdd8;
      if (lVar4 == 0) goto LAB_061dce18;
      lVar11 = *(long *)(lVar4 + 0x10);
      lVar12 = *(long *)puVar3;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar11 == 0) goto LAB_061dce18;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        plVar8 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
        *plVar8 = (long)plVar5;
        thunk_FUN_037aeb94(plVar8,plVar5);
      }
      else {
        FUN_049ceef4(lVar4,plVar5,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70)
                    );
      }
      plVar5 = (long *)thunk_FUN_037788cc(*(undefined8 *)puVar2);
      FUN_061dc894(plVar5,param_2,param_3 & 1);
      param_2 = param_2 + 1;
    } while (plVar5 != (long *)0x0);
    *(byte *)(param_1 + 0x20) = param_3 & 1;
  }
  uVar6 = FUN_049d0970(lVar4,*(undefined8 *)PTR_DAT_07dacd80);
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  thunk_FUN_037aeb94((undefined8 *)(param_1 + 0x10),uVar6);
  return;
}


