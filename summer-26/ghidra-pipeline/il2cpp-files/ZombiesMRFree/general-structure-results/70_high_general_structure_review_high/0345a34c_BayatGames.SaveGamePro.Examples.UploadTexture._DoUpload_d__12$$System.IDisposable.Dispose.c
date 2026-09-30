/*
FUNCTION_NAME: BayatGames.SaveGamePro.Examples.UploadTexture.<DoUpload>d__12$$System.IDisposable.Dispose
ENTRY_POINT: 0345a34c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void BayatGames_SaveGamePro_Examples_UploadTexture_<DoUpload>d__12__System_IDisposable_Dispose
               (long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar7;
  
  FUN_02fe925c(*(undefined8 *)(param_1 + 0x250));
  FUN_02fe925c(PTR_DAT_06f7c4f8);
  FUN_02fe925c(PTR_DAT_06f7c518);
  FUN_02fe925c(PTR_DAT_06f7c520);
  FUN_02fe925c(PTR_DAT_06f7c968);
  FUN_02fe925c(PTR_DAT_06f7c530);
  *(undefined1 *)(unaff_x21 + 0xe86) = 1;
  puVar2 = PTR_DAT_06f7c4b0;
  if (unaff_x20 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06f7f320 + 0x130);
    if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06f7f320)
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884();
    }
    if (unaff_x19 != (long *)0x0) {
      lVar4 = *unaff_x19;
      lVar7 = *(long *)PTR_DAT_06f7d710;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
            lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
            goto LAB_0345a450;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      lVar4 = FUN_02feb5b8();
LAB_0345a450:
      lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
      (**(code **)(lVar4 + 8))();
      FUN_068fa64c();
      lVar7 = *(long *)puVar2;
      lVar4 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
            lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
            goto LAB_0345a4e4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      lVar4 = FUN_02feb5b8();
LAB_0345a4e4:
      puVar3 = PTR_DAT_06f7c4d0;
      lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
      (**(code **)(lVar4 + 8))();
      FUN_068f524c();
      lVar7 = *(long *)puVar2;
      lVar4 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
            lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
            goto LAB_0345a580;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      lVar4 = FUN_02feb5b8();
LAB_0345a580:
      lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
      (**(code **)(lVar4 + 8))();
      FUN_068f62b0();
      lVar7 = *(long *)puVar3;
      lVar4 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
            lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
            goto LAB_0345a614;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      lVar4 = FUN_02feb5b8();
LAB_0345a614:
      puVar2 = PTR_DAT_06f7c4b8;
      lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
      (**(code **)(lVar4 + 8))();
      FUN_068fc8bc();
      lVar7 = *(long *)puVar3;
      lVar4 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
            lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
            goto HeathenEngineering_UX_Samples_ToggleSetAnimatorBoolean__SetBoolean;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      lVar4 = FUN_02feb5b8();
HeathenEngineering_UX_Samples_ToggleSetAnimatorBoolean__SetBoolean:
      lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
      (**(code **)(lVar4 + 8))();
      FUN_068fd700();
      lVar7 = *(long *)puVar2;
      lVar4 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)(lVar7 + 0x20)) {
            lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
            goto LAB_0345a73c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      lVar4 = FUN_02feb5b8();
LAB_0345a73c:
      lVar4 = thunk_FUN_02fffafc(*(undefined8 *)(lVar4 + 8),lVar7);
                    /* WARNING: Could not recover jumptable at 0x0345a770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar4 + 8))();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


