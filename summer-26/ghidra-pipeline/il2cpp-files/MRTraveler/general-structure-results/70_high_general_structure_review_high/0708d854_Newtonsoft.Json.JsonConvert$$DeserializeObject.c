/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject
ENTRY_POINT: 0708d854
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonConvert__DeserializeObject(long param_1)

{
  int iVar1;
  undefined *puVar2;
  short sVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar10;
  long unaff_x21;
  undefined *puVar9;
  
  puVar9 = PTR_DAT_08e69d78;
  if ((*(byte *)(unaff_x21 + 0xd90) & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e6b4b0);
    FUN_03c8f898(PTR_DAT_08e69920);
    FUN_03c8f898(PTR_DAT_08e69d78);
    *(undefined1 *)(unaff_x21 + 0xd90) = 1;
  }
  uVar5 = thunk_FUN_06f73d88(param_1,**(undefined8 **)(*(long *)puVar9 + 0xb8),0);
  puVar2 = PTR_DAT_08e69920;
  if ((uVar5 & 1) != 0) {
    thunk_FUN_03ce5214(PTR_DAT_08e76350);
    uVar6 = thunk_FUN_03cf5234();
    puVar9 = PTR_DAT_08ea25b8;
    goto LAB_0708dba8;
  }
  if (param_1 != 0) {
    if (*(int *)(*(long *)PTR_DAT_08e69920 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar6 = FUN_0708dbd4(param_1);
    uVar5 = thunk_FUN_06f73d88(uVar6,param_1,0);
    if ((uVar5 & 1) == 0) {
      lVar7 = FUN_06f78bac(param_1,0);
      if (lVar7 == 0) {
LAB_0708db68:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (*(int *)(lVar7 + 0x10) == 0) {
        thunk_FUN_03ce5214(PTR_DAT_08e76350);
        uVar6 = thunk_FUN_03cf5234();
        puVar9 = PTR_DAT_08ea25c0;
      }
      else {
        lVar7 = *(long *)puVar2;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar7 = *(long *)puVar2;
        }
        iVar4 = FUN_06f7915c(param_1,**(undefined8 **)(lVar7 + 0xb8),0);
        if (iVar4 < 0) {
          lVar7 = *(long *)puVar2;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
            lVar7 = *(long *)puVar2;
          }
          iVar4 = FUN_06f79a3c(param_1,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x20),0);
          if (iVar4 == 0) {
            iVar4 = 1;
          }
          else if (iVar4 < 1) {
            return **(undefined8 **)(*(long *)puVar9 + 0xb8);
          }
          lVar7 = FUN_06f764fc(param_1,0,iVar4,0);
          if (lVar7 != 0) {
            iVar1 = *(int *)(lVar7 + 0x10);
            if (iVar1 < 2) {
              lVar10 = *(long *)puVar2;
              if (iVar1 == 1) {
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_03cd7500(lVar10);
                  lVar10 = *(long *)puVar2;
                }
                if ((*(short *)(*(long *)(lVar10 + 0xb8) + 10) == 0x5c) &&
                   (1 < *(int *)(param_1 + 0x10))) {
                  sVar3 = FUN_06f6fafc(param_1,iVar4,0);
                  lVar10 = *(long *)puVar2;
                  if (*(int *)(lVar10 + 0xe0) == 0) {
                    thunk_FUN_03cd7500(lVar10);
                    lVar10 = *(long *)puVar2;
                  }
                  if (*(short *)(*(long *)(lVar10 + 0xb8) + 0x18) == sVar3) {
                    if (*(int *)(lVar10 + 0xe0) == 0) {
                      thunk_FUN_03cd7500(lVar10);
                    }
                    if (*(int *)(*(long *)PTR_DAT_08e6b4b0 + 0xe0) == 0) {
                      thunk_FUN_03cd7500();
                    }
                    lVar10 = *(long *)(*(long *)puVar2 + 0xb8) + 0x18;
                    goto FUN_0708db00;
                  }
                }
              }
            }
            else {
              lVar10 = *(long *)puVar2;
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_03cd7500(lVar10);
                lVar10 = *(long *)puVar2;
              }
              if (*(short *)(*(long *)(lVar10 + 0xb8) + 10) == 0x5c) {
                sVar3 = FUN_06f6fafc(lVar7,iVar1 + -1,0);
                lVar10 = *(long *)puVar2;
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_03cd7500(lVar10);
                  lVar10 = *(long *)puVar2;
                }
                if (*(short *)(*(long *)(lVar10 + 0xb8) + 0x18) == sVar3) {
                  if (*(int *)(lVar10 + 0xe0) == 0) {
                    thunk_FUN_03cd7500(lVar10);
                  }
                  if (*(int *)(*(long *)PTR_DAT_08e6b4b0 + 0xe0) == 0) {
                    thunk_FUN_03cd7500();
                  }
                  lVar10 = *(long *)(*(long *)puVar2 + 0xb8) + 10;
FUN_0708db00:
                  uVar6 = FUN_07059e90(lVar10,0);
                  uVar6 = FUN_06f683f8(lVar7,uVar6,0);
                  return uVar6;
                }
              }
            }
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_03cd7500(lVar10);
            }
            uVar6 = FUN_0708d3f4(lVar7);
            return uVar6;
          }
          goto LAB_0708db68;
        }
        thunk_FUN_03ce5214(PTR_DAT_08e76350);
        uVar6 = thunk_FUN_03cf5234();
        puVar9 = PTR_DAT_08ea25c8;
      }
LAB_0708dba8:
      uVar8 = thunk_FUN_03ce5214(puVar9);
      FUN_07064ba8(uVar6,uVar8,0);
      uVar8 = thunk_FUN_03ce5214(PTR_DAT_08ea25d0);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar6,uVar8);
    }
  }
  return 0;
}


