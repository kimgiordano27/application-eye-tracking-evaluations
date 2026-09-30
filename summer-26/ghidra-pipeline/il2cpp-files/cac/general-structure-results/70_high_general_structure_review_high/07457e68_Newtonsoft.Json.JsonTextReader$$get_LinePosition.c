/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$get_LinePosition
ENTRY_POINT: 07457e68
PROGRAM: cac-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void Newtonsoft_Json_JsonTextReader__get_LinePosition(ulong param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint in_w9;
  long lVar3;
  ulong in_x10;
  long in_x11;
  long in_x12;
  long in_x13;
  long in_x14;
  int unaff_w19;
  long unaff_x20;
  uint unaff_w23;
  
  while( true ) {
    uVar1 = in_w9 & 0x18;
    in_x10 = in_x10 + 1;
    in_w9 = in_w9 + 8;
    lVar3 = in_x11 >> 0x20;
    in_x11 = in_x11 + in_x13;
    *(char *)(param_2 + lVar3 + 0x20) = (char)(*(int *)(in_x14 + 0x20) >> uVar1);
    if (param_1 == in_x10) break;
    lVar3 = *(long *)(unaff_x20 + 0x10);
    if (lVar3 == 0) goto LAB_0745806c;
    uVar1 = (uint)(in_x10 >> 2) & 0x3fffffff;
    if ((*(uint *)(lVar3 + 0x18) <= uVar1) || ((ulong)*(uint *)(param_2 + 0x18) <= in_x12 + in_x10))
    goto LAB_07458068;
    in_x14 = lVar3 + (ulong)uVar1 * 4;
  }
  if (0 < (int)unaff_w23) {
    lVar3 = *(long *)(unaff_x20 + 0x10);
    if (lVar3 == 0) {
LAB_0745806c:
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    uVar2 = (uint)param_1;
    uVar1 = uVar2 + 3;
    if (-1 < (int)uVar2) {
      uVar1 = uVar2;
    }
    if ((*(uint *)(lVar3 + 0x18) <= (uint)((int)uVar1 >> 2)) ||
       (*(uint *)(param_2 + 0x18) <= uVar2 + unaff_w19)) {
LAB_07458068:
                    /* WARNING: Subroutine does not return */
      FUN_03f13634();
    }
    *(byte *)(param_2 + (int)(uVar2 + unaff_w19) + 0x20) =
         (byte)(*(int *)(lVar3 + (ulong)(uint)((int)uVar1 >> 2) * 4 + 0x20) >> ((uVar2 & 3) << 3)) &
         ((byte)(-1 << (ulong)(unaff_w23 & 0x1f)) ^ 0xff);
  }
  return;
}


