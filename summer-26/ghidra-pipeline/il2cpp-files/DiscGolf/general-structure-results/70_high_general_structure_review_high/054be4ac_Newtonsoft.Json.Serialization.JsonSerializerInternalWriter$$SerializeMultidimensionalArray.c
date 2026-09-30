/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray
ENTRY_POINT: 054be4ac
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray
               (ulong param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 in_CY;
  short sVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  byte unaff_w22;
  long *unaff_x23;
  ulong unaff_x24;
  undefined8 *unaff_x25;
  int unaff_w26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  
  do {
    if ((bool)in_CY) {
LAB_054be678:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
                    /* try { // try from 054be4b0 to 055be4db has its CatchHandler @ 054bee08 */
    if (*unaff_x23 == 0) {
LAB_054be67c:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar6 = unaff_x29;
    if (*(int *)(*unaff_x23 + 0x10) != 0) goto LAB_054be4f0;
    while( true ) {
      do {
                    /* try { // try from 054be54c to 055be54f has its CatchHandler @ 054bedc0 */
        unaff_x29 = lVar6 + 1;
        unaff_x23 = unaff_x23 + 1;
        if ((long)*(int *)(unaff_x20 + 0x18) <= lVar6 + 3) {
          if (unaff_w21 != 0) {
                    /* try { // try from 054be574 to 055be57b has its CatchHandler @ 054bedc8 */
            if (unaff_w21 == 1) {
              if (*(int *)(unaff_x20 + 0x18) == 0) goto LAB_054be678;
              uVar5 = thunk_FUN_0536b75c(*unaff_x25,*(undefined8 *)PTR_DAT_069fba08,0);
              if ((uVar5 & 1) != 0) {
                return unaff_x19;
              }
            }
            puVar3 = PTR_DAT_06a0f540;
            lVar6 = *(long *)PTR_DAT_06a0f540;
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar6 = *(long *)puVar3;
            }
                    /* try { // try from 054be5c0 to 055be5c3 has its CatchHandler @ 054bedb4 */
            unaff_x19 = FUN_0536e55c(*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10));
            uVar5 = FUN_0552ede4(0);
                    /* try { // try from 054be600 to 055be60b has its CatchHandler @ 054bedb0 */
            if (((uVar5 & 1) == 0) && (uVar5 = FUN_0536ba54(), (uVar5 & 1) != 0)) {
              if (unaff_x19 == 0) goto LAB_054be67c;
                    /* try { // try from 054be60c to 055be613 has its CatchHandler @ 054bede8 */
                    /* try { // try from 054be624 to 055be627 has its CatchHandler @ 054bede4 */
              if ((0 < *(int *)(unaff_x19 + 0x10)) &&
                 (sVar4 = FUN_053674f8(unaff_x19,0,0), sVar4 != 0x2f)) {
                    /* try { // try from 054be66c to 055be693 has its CatchHandler @ 054bec60 */
                lVar6 = FUN_05362cb4();
                return lVar6;
              }
            }
          }
          return unaff_x19;
        }
        unaff_x24 = lVar6 + 3;
        uVar5 = FUN_0552ede4(0);
        if ((uVar5 & 1) != 0) {
          if (*(uint *)(unaff_x20 + 0x18) <= unaff_x24) goto LAB_054be678;
          if (*unaff_x23 == 0) goto LAB_054be67c;
          lVar6 = FUN_05372280(*unaff_x23,0);
          if (*(uint *)(unaff_x20 + 0x18) <= unaff_x24) goto LAB_054be678;
          *unaff_x23 = lVar6;
          LeanTween__value(unaff_x23,lVar6);
        }
        if ((unaff_w22 & unaff_x29 == 0) != 0) goto LAB_054be4a4;
        if (*(uint *)(unaff_x20 + 0x18) <= unaff_x24) goto LAB_054be678;
        uVar5 = thunk_FUN_0536b75c(*unaff_x23,*unaff_x28,0);
        lVar6 = unaff_x29;
      } while ((uVar5 & 1) != 0);
      if (unaff_x29 != -2) break;
      param_1 = (ulong)*(uint *)(unaff_x20 + 0x18);
LAB_054be4f0:
      if (param_1 <= unaff_x24) goto LAB_054be678;
      uVar5 = thunk_FUN_0536b75c(*unaff_x23,*unaff_x27,0);
      lVar6 = unaff_x29;
      if ((uVar5 & 1) == 0) {
                    /* try { // try from 054be52c to 055be533 has its CatchHandler @ 054beda4 */
        if ((*(uint *)(unaff_x20 + 0x18) <= unaff_x24) || (*(uint *)(unaff_x20 + 0x18) <= unaff_w21)
           ) goto LAB_054be678;
        lVar1 = (long)(int)unaff_w21;
        lVar2 = (long)(int)unaff_w21;
        unaff_w21 = unaff_w21 + 1;
        *(long *)(unaff_x20 + lVar1 * 8 + 0x20) = *unaff_x23;
        LeanTween__value(unaff_x25 + lVar2);
      }
      else {
        unaff_w21 = unaff_w21 - (unaff_w26 < (int)unaff_w21);
      }
    }
LAB_054be4a4:
    param_1 = (ulong)*(uint *)(unaff_x20 + 0x18);
    in_CY = param_1 <= unaff_x24;
  } while( true );
}


