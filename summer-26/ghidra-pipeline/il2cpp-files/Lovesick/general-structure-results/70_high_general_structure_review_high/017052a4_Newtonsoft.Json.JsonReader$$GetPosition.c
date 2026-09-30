/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$GetPosition
ENTRY_POINT: 017052a4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


bool Newtonsoft_Json_JsonReader__GetPosition(void)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  long lVar4;
  long lVar5;
  short unaff_w19;
  ulong uVar6;
  long unaff_x20;
  long *unaff_x21;
  uint uVar7;
  
  *(undefined1 *)(unaff_x20 + 0x9a2) = 1;
  lVar4 = *unaff_x21;
  uVar7 = 1;
  while( true ) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar4 = *unaff_x21;
    }
    if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_01705404;
    uVar2 = uVar7 - 1;
    if (*(int *)(**(long **)(lVar4 + 0xb8) + 0x18) <= (int)uVar2) goto LAB_0170538c;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar4 = *unaff_x21;
    }
    lVar5 = **(long **)(lVar4 + 0xb8);
    if (lVar5 == 0) goto LAB_01705404;
    if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_01705408;
    if (*(char *)(lVar5 + (int)uVar2 + 0x20) == '\0') break;
    uVar7 = uVar7 + 1;
  }
  lVar4 = FUN_017b7e58(0);
  if (lVar4 == 0) {
LAB_01705404:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  sVar3 = FUN_015fa29c(lVar4,uVar2,0);
  lVar4 = *unaff_x21;
  if (sVar3 == unaff_w19) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar4 = *unaff_x21;
    }
    lVar4 = **(long **)(lVar4 + 0xb8);
    if (lVar4 == 0) goto LAB_01705404;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar2 < uVar1) {
      *(undefined1 *)(lVar4 + (int)uVar2 + 0x20) = 1;
      return uVar1 == uVar7;
    }
  }
  else {
LAB_0170538c:
    uVar6 = 0;
    while( true ) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar4 = *unaff_x21;
      }
      if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_01705404;
      if ((long)*(int *)(**(long **)(lVar4 + 0xb8) + 0x18) <= (long)uVar6) {
        return false;
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar4 = *unaff_x21;
      }
      lVar5 = **(long **)(lVar4 + 0xb8);
      if (lVar5 == 0) goto LAB_01705404;
      if (*(uint *)(lVar5 + 0x18) <= uVar6) break;
      lVar5 = lVar5 + uVar6;
      uVar6 = uVar6 + 1;
      *(undefined1 *)(lVar5 + 0x20) = 0;
    }
  }
LAB_01705408:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


