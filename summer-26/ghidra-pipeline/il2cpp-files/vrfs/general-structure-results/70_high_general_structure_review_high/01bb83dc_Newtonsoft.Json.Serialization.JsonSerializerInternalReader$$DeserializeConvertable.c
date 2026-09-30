/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$DeserializeConvertable
ENTRY_POINT: 01bb83dc
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalReader__DeserializeConvertable(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  int unaff_w19;
  long unaff_x21;
  uint unaff_w23;
  
  if (param_1 != 0) {
    FUN_0187ee8c(param_1,0);
  }
  if (*(long *)(unaff_x21 + 0x28) != 0) {
    FUN_01bb85b8(*(long *)(unaff_x21 + 0x28),(int)unaff_w23 >> 0x10);
    if (*(long *)(unaff_x21 + 0x28) != 0) {
      FUN_01bb85b8(*(long *)(unaff_x21 + 0x28),unaff_w23 & 0xffff);
      *(uint *)(unaff_x21 + 0x18) = *(uint *)(unaff_x21 + 0x18) & 0xc | 0x10;
      lVar4 = *(long *)(unaff_x21 + 0x28);
      iVar1 = unaff_w19;
      while (lVar4 != 0) {
        iVar2 = FUN_01bb8634();
        iVar1 = iVar1 - iVar2;
        *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x21 + 0x20) + (long)iVar2;
        if ((iVar1 == 0) || (uVar3 = *(uint *)(unaff_x21 + 0x18), uVar3 == 0x1e)) {
LAB_01bb8550:
          return unaff_w19 - iVar1;
        }
        if (*(long *)(unaff_x21 + 0x30) == 0) break;
        uVar5 = FUN_01bb86f0(*(long *)(unaff_x21 + 0x30),uVar3 >> 2 & 1,uVar3 >> 3 & 1);
        if ((uVar5 & 1) == 0) {
          iVar2 = *(int *)(unaff_x21 + 0x18);
          if (iVar2 == 0x14) {
            if (*(int *)(unaff_x21 + 0x10) != 0) {
              lVar4 = *(long *)(unaff_x21 + 0x28);
              if (lVar4 == 0) break;
              uVar3 = -*(int *)(lVar4 + 0x24) & 7U | 8;
              while( true ) {
                FUN_01bb87e4(lVar4,2,10);
                uVar3 = uVar3 - 10;
                if ((int)uVar3 < 1) break;
                lVar4 = *(long *)(unaff_x21 + 0x28);
                if (lVar4 == 0) goto LAB_01bb854c;
              }
            }
            *(undefined4 *)(unaff_x21 + 0x18) = 0x10;
          }
          else if (iVar2 == 0x1c) {
            if (*(long *)(unaff_x21 + 0x28) == 0) break;
            FUN_01bb8880();
            if (*(char *)(unaff_x21 + 0x14) == '\0') {
              if (*(long *)(unaff_x21 + 0x30) == 0) break;
              lVar4 = *(long *)(*(long *)(unaff_x21 + 0x30) + 0x88);
              if (lVar4 == 0) {
                uVar3 = 0;
              }
              else {
                uVar3 = FUN_0187ee98(lVar4,0);
              }
              if (*(long *)(unaff_x21 + 0x28) == 0) break;
              FUN_01bb85b8(*(long *)(unaff_x21 + 0x28),(int)uVar3 >> 0x10);
              if (*(long *)(unaff_x21 + 0x28) == 0) break;
              FUN_01bb85b8(*(long *)(unaff_x21 + 0x28),uVar3 & 0xffff);
            }
            *(undefined4 *)(unaff_x21 + 0x18) = 0x1e;
          }
          else if (iVar2 == 0x10) goto LAB_01bb8550;
        }
        lVar4 = *(long *)(unaff_x21 + 0x28);
      }
    }
  }
LAB_01bb854c:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


