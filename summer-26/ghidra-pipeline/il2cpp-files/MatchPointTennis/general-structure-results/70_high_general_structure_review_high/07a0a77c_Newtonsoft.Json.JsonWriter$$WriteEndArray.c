/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$WriteEndArray
ENTRY_POINT: 07a0a77c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


void Newtonsoft_Json_JsonWriter__WriteEndArray(void)

{
  undefined *puVar1;
  bool bVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x19;
  byte unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 uVar9;
  long unaff_x23;
  
  *(undefined1 *)(unaff_x23 + 0xf13) = 1;
  FUN_07a80df4();
  if (unaff_x22 == (long *)0x0) {
    thunk_FUN_044adef4(PTR_DAT_09f251e0);
    uVar7 = thunk_FUN_0448520c();
    puVar8 = PTR_DAT_09f43eb8;
  }
  else {
    if (unaff_x21 != (long *)0x0) {
      uVar6 = (**(code **)(*unaff_x22 + 0x1b8))();
      puVar1 = PTR_DAT_09f3b9b0;
      puVar8 = PTR_DAT_09f1e518;
      if ((uVar6 & 1) == 0) {
        uVar7 = thunk_FUN_044adef4(PTR_DAT_09f3be70);
        uVar7 = FUN_07a80dec(uVar7,0);
        thunk_FUN_044adef4(PTR_DAT_09f217f8);
        uVar9 = thunk_FUN_0448520c();
        FUN_0799d598(uVar9,uVar7,0);
        uVar7 = thunk_FUN_044adef4(PTR_DAT_09f43ec0);
                    /* WARNING: Subroutine does not return */
        FUN_04447d10(uVar9,uVar7);
      }
      *(long **)(unaff_x19 + 0x10) = unaff_x22;
      thunk_FUN_044bb4b4();
      uVar7 = (**(code **)(*unaff_x21 + 0x338))();
      *(undefined8 *)(unaff_x19 + 0x20) = uVar7;
      thunk_FUN_044bb4b4();
      uVar4 = (**(code **)(*unaff_x21 + 0x368))();
      *(undefined4 *)(unaff_x19 + 0x40) = uVar4;
      iVar5 = (**(code **)(*unaff_x21 + 0x358))();
      if (iVar5 < 0x11) {
        iVar5 = 0x10;
      }
      uVar7 = FUN_04447c90(*(undefined8 *)puVar8,iVar5);
      *(undefined8 *)(unaff_x19 + 0x18) = uVar7;
      thunk_FUN_044bb4b4();
      bVar3 = *(byte *)(*(long *)puVar1 + 0x130);
      if (*(byte *)(*unaff_x21 + 0x130) < bVar3) {
        bVar2 = false;
      }
      else {
        bVar2 = *(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar3 * 8 + -8) == *(long *)puVar1;
      }
      *(bool *)(unaff_x19 + 0x44) = bVar2;
      puVar8 = PTR_DAT_09f43428;
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        uVar7 = thunk_FUN_04457f54(*(long *)(unaff_x19 + 0x10),0);
        uVar9 = *(undefined8 *)puVar8;
        if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)(PTR_DAT_09f1e5b8 + 0xe0));
        }
        uVar9 = FUN_07a4ce38(uVar9,0);
        bVar3 = FUN_07a5629c(uVar7,uVar9,0);
        *(byte *)(unaff_x19 + 0x45) = bVar3 & 1;
        *(byte *)(unaff_x19 + 0x46) = unaff_w20 & 1;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    thunk_FUN_044adef4(PTR_DAT_09f251e0);
    uVar7 = thunk_FUN_0448520c();
    puVar8 = PTR_DAT_09f3bbd0;
  }
  uVar9 = thunk_FUN_044adef4(puVar8);
  FUN_07996cc8(uVar7,uVar9,0);
  uVar9 = thunk_FUN_044adef4(PTR_DAT_09f43ec0);
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar7,uVar9);
}


