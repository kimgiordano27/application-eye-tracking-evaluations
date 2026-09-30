/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$ReadArrayIntoByteArray
ENTRY_POINT: 04d06304
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


long Newtonsoft_Json_JsonReader__ReadArrayIntoByteArray(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  ulong uVar6;
  uint uVar7;
  
  *(undefined1 *)(unaff_x19 + 0x4d1) = 1;
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar1 = FUN_04d0592c();
  if (lVar1 != 0) {
    lVar2 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313630,*(undefined4 *)(lVar1 + 0x18));
    uVar4 = (ulong)*(uint *)(lVar1 + 0x18);
    if (0 < (int)*(uint *)(lVar1 + 0x18)) {
      uVar6 = 0;
      uVar7 = 0xffffffff;
      puVar3 = (undefined8 *)(lVar2 + 0x20);
      do {
        if (!CARRY4((uint)uVar4,uVar7)) {
LAB_04d063bc:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        lVar5 = *(long *)(lVar1 + (long)(int)((uint)uVar4 + uVar7) * 8 + 0x20);
        if ((lVar5 == 0) || (lVar2 == 0)) goto LAB_04d063b8;
        if (*(uint *)(lVar2 + 0x18) <= uVar6) goto LAB_04d063bc;
        *puVar3 = *(undefined8 *)(lVar5 + 0x30);
        thunk_FUN_02bb0e9c();
        uVar4 = *(ulong *)(lVar1 + 0x18);
        uVar6 = uVar6 + 1;
        uVar7 = uVar7 - 1;
        puVar3 = puVar3 + 1;
      } while ((long)uVar6 < (long)(int)uVar4);
    }
    return lVar2;
  }
LAB_04d063b8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


