/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetConverter
ENTRY_POINT: 01bb8370
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetConverter(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint in_w8;
  long lVar5;
  int unaff_w19;
  long unaff_x21;
  
  FUN_01bb85b8(param_1,(in_w8 | 0x1f) + (((int)in_w8 / 0x1f) * 0x1f - in_w8));
  uVar2 = *(uint *)(unaff_x21 + 0x18);
  if ((uVar2 & 1) != 0) {
    lVar5 = *(long *)(unaff_x21 + 0x30);
    if (lVar5 == 0) goto LAB_01bb854c;
    if (*(long *)(lVar5 + 0x88) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0187ee98(*(long *)(lVar5 + 0x88),0);
      lVar5 = *(long *)(unaff_x21 + 0x30);
      if (lVar5 == 0) goto LAB_01bb854c;
    }
    if (*(long *)(lVar5 + 0x88) != 0) {
      FUN_0187ee8c(*(long *)(lVar5 + 0x88),0);
    }
    if (*(long *)(unaff_x21 + 0x28) == 0) goto LAB_01bb854c;
    FUN_01bb85b8(*(long *)(unaff_x21 + 0x28),(int)uVar2 >> 0x10);
    if (*(long *)(unaff_x21 + 0x28) == 0) goto LAB_01bb854c;
    FUN_01bb85b8(*(long *)(unaff_x21 + 0x28),uVar2 & 0xffff);
    uVar2 = *(uint *)(unaff_x21 + 0x18);
  }
  *(uint *)(unaff_x21 + 0x18) = uVar2 & 0xc | 0x10;
  lVar5 = *(long *)(unaff_x21 + 0x28);
  iVar1 = unaff_w19;
  while (lVar5 != 0) {
    iVar3 = FUN_01bb8634();
    iVar1 = iVar1 - iVar3;
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x21 + 0x20) + (long)iVar3;
    if ((iVar1 == 0) || (uVar2 = *(uint *)(unaff_x21 + 0x18), uVar2 == 0x1e)) {
LAB_01bb8550:
      return unaff_w19 - iVar1;
    }
    if (*(long *)(unaff_x21 + 0x30) == 0) break;
    uVar4 = FUN_01bb86f0(*(long *)(unaff_x21 + 0x30),uVar2 >> 2 & 1,uVar2 >> 3 & 1);
    if ((uVar4 & 1) == 0) {
      iVar3 = *(int *)(unaff_x21 + 0x18);
      if (iVar3 == 0x14) {
        if (*(int *)(unaff_x21 + 0x10) != 0) {
          lVar5 = *(long *)(unaff_x21 + 0x28);
          if (lVar5 == 0) break;
          uVar2 = -*(int *)(lVar5 + 0x24) & 7U | 8;
          while( true ) {
            FUN_01bb87e4(lVar5,2,10);
            uVar2 = uVar2 - 10;
            if ((int)uVar2 < 1) break;
            lVar5 = *(long *)(unaff_x21 + 0x28);
            if (lVar5 == 0) goto LAB_01bb854c;
          }
        }
        *(undefined4 *)(unaff_x21 + 0x18) = 0x10;
      }
      else if (iVar3 == 0x1c) {
        if (*(long *)(unaff_x21 + 0x28) == 0) break;
        FUN_01bb8880();
        if (*(char *)(unaff_x21 + 0x14) == '\0') {
          if (*(long *)(unaff_x21 + 0x30) == 0) break;
          lVar5 = *(long *)(*(long *)(unaff_x21 + 0x30) + 0x88);
          if (lVar5 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = FUN_0187ee98(lVar5,0);
          }
          if (*(long *)(unaff_x21 + 0x28) == 0) break;
          FUN_01bb85b8(*(long *)(unaff_x21 + 0x28),(int)uVar2 >> 0x10);
          if (*(long *)(unaff_x21 + 0x28) == 0) break;
          FUN_01bb85b8(*(long *)(unaff_x21 + 0x28),uVar2 & 0xffff);
        }
        *(undefined4 *)(unaff_x21 + 0x18) = 0x1e;
      }
      else if (iVar3 == 0x10) goto LAB_01bb8550;
    }
    lVar5 = *(long *)(unaff_x21 + 0x28);
  }
LAB_01bb854c:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


