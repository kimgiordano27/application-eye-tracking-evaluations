/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$WriteStartArray
ENTRY_POINT: 032692f8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


void Newtonsoft_Json_JsonWriter__WriteStartArray(void)

{
  uint uVar1;
  undefined *puVar2;
  uint unaff_w19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long lVar3;
  undefined4 uStack000000000000000c;
  uint in_stack_00000018;
  
  FUN_01c5d288();
  FUN_01c5d288(UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_Reader_TypeInfo);
  FUN_01c5d288(Bomb_<_SpawnBombForNewPlayer>d__69_TypeInfo);
  *(undefined1 *)(unaff_x22 + 0xb5c) = 1;
  FUN_0331c63c(*unaff_x21,0);
  if (*(int *)(unaff_x21 + 1) < 0) {
    FUN_032f1cb4(0);
  }
  uStack000000000000000c = 0;
  FUN_030ad694();
  if ((*(byte *)((long)unaff_x21 + 0x2c) & 1) == 0) {
    if (unaff_w19 <= *(uint *)(unaff_x21 + 1)) goto LAB_032694a8;
    *(undefined2 *)(unaff_x20 + (long)(int)*(uint *)(unaff_x21 + 1) * 2) = 0x2f;
  }
  puVar2 = ArenaManager_<FinishedRound>d__143_TypeInfo;
  FUN_0331c63c(unaff_x21[2],0);
  if (*(int *)(unaff_x21 + 3) < 0) {
    FUN_032f1cb4(0);
  }
  uStack000000000000000c = 0;
  lVar3 = *(long *)puVar2;
  if (in_stack_00000018 < *(int *)(unaff_x21 + 1) + (~(uint)*(byte *)((long)unaff_x21 + 0x2c) & 1))
  {
    FUN_032f1cb4(0);
  }
  if ((*(byte *)(*(long *)(lVar3 + 0x20) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  FUN_030ad694();
  if ((*(byte *)((long)unaff_x21 + 0x2d) & 1) == 0) {
    if (!CARRY4(unaff_w19,~*(uint *)(unaff_x21 + 5))) {
LAB_032694a8:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    *(undefined2 *)(unaff_x20 + (long)(int)(unaff_w19 + ~*(uint *)(unaff_x21 + 5)) * 2) = 0x2f;
  }
  FUN_0331c63c(unaff_x21[4],0);
  uVar1 = *(uint *)(unaff_x21 + 5);
  if ((int)uVar1 < 0) {
    FUN_032f1cb4(0);
    uVar1 = *(uint *)(unaff_x21 + 5);
  }
  lVar3 = *(long *)puVar2;
  uStack000000000000000c = 0;
  if (unaff_w19 < uVar1) {
    FUN_032f1cb4(0);
  }
  if ((*(byte *)(*(long *)(lVar3 + 0x20) + 0x135) & 1) == 0) {
    FUN_01c72394();
  }
  FUN_030ad694();
  return;
}


