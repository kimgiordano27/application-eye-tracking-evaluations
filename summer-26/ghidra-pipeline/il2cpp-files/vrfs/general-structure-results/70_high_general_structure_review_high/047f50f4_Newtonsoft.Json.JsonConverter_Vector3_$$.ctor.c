/*
FUNCTION_NAME: Newtonsoft.Json.JsonConverter<Vector3>$$.ctor
ENTRY_POINT: 047f50f4
PROGRAM: vrfs-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x047f5210) */
/* WARNING: Removing unreachable block (ram,0x047f524c) */
/* WARNING: Removing unreachable block (ram,0x047f5310) */

void Newtonsoft_Json_JsonConverter<Vector3>___ctor(long param_1,int param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  char in_stack_00000018;
  char cStack000000000000001c;
  
  if ((DAT_0723f53f & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06dca638);
    DAT_0723f53f = 1;
  }
  puVar2 = PTR_DAT_06dca638;
  uVar6 = 0;
  in_stack_00000018 = '\0';
  do {
    iVar1 = 1 << (ulong)((uint)uVar6 & 0x1f);
    if ((param_2 <= iVar1) && (iVar1 <= param_3)) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      cStack000000000000001c = '\0';
      FUN_03714a74(uVar5,&stack0x0000001c,0);
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      lVar3 = *(long *)(lVar3 + uVar6 * 8 + 0x20);
      if (lVar3 != 0) {
        in_stack_00000018 = '\0';
        FUN_03714a74(lVar3,&stack0x00000018,0);
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        lVar4 = *(long *)(lVar4 + uVar6 * 8 + 0x20);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        FUN_026dbc10(lVar4,*(undefined8 *)puVar2);
        if (in_stack_00000018 != '\0') {
          thunk_FUN_0160f328(lVar3,0);
        }
      }
      if (cStack000000000000001c != '\0') {
        thunk_FUN_0160f328(uVar5,0);
      }
    }
    uVar6 = uVar6 + 1;
    if (uVar6 == 0x20) {
      return;
    }
  } while( true );
}


