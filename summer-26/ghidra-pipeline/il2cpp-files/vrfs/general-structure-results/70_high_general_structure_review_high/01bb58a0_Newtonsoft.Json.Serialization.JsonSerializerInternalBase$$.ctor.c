/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$.ctor
ENTRY_POINT: 01bb58a0
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase___ctor(void)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long *unaff_x19;
  long unaff_x20;
  
  FUN_01bb4930();
  if (*(long *)(unaff_x20 + 0x78) != 0) {
    FUN_0443c8d4(*(long *)(unaff_x20 + 0x78),0);
    FUN_01bb4930();
    FUN_01bb4930();
    if (*(long *)(unaff_x20 + 0x78) != 0) {
      uVar2 = FUN_0443c508(*(long *)(unaff_x20 + 0x78),0);
      if (*unaff_x19 != 0) {
        FUN_0443c8a8(*unaff_x19,0);
        if ((uVar2 & 1) == 0) {
          FUN_01bb4930();
          FUN_01bb4930();
          if (*(long *)(unaff_x20 + 0x78) == 0) goto LAB_01bb5a2c;
          FUN_0443ad6c(*(long *)(unaff_x20 + 0x78),0);
          FUN_01bb4930();
          FUN_01bb4930();
          lVar4 = 0x10;
        }
        else {
          FUN_01bb49a8();
          if (*(long *)(unaff_x20 + 0x78) == 0) goto LAB_01bb5a2c;
          FUN_0443ad6c(*(long *)(unaff_x20 + 0x78),0);
          FUN_01bb49a8();
          lVar4 = 0x18;
        }
        *(long *)(unaff_x20 + 0x90) = *(long *)(unaff_x20 + 0x90) + lVar4;
        lVar4 = *(long *)(unaff_x20 + 0x68);
        if (lVar4 != 0) {
          uVar3 = *(undefined8 *)(unaff_x20 + 0x78);
          lVar5 = *(long *)(lVar4 + 0x10);
          lVar7 = *(long *)PTR_DAT_06e48600;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar5 != 0) {
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              puVar6 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
              *puVar6 = uVar3;
              thunk_FUN_01656ef8(puVar6);
            }
            else {
              (**(code **)(*(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x58) + 8))();
            }
            *unaff_x19 = 0;
            thunk_FUN_01656ef8();
            return;
          }
        }
      }
    }
  }
LAB_01bb5a2c:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


