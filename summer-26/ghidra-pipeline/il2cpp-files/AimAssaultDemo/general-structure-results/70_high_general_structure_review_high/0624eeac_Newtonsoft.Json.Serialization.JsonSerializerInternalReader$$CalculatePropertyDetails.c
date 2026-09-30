/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CalculatePropertyDetails
ENTRY_POINT: 0624eeac
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CalculatePropertyDetails(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  uint unaff_w19;
  int unaff_w20;
  long *unaff_x21;
  uint unaff_w23;
  ushort *unaff_x24;
  long unaff_x25;
  ushort *unaff_x27;
  ushort unaff_w28;
  int unaff_w29;
  ulong *in_stack_00000008;
  uint in_stack_00000010;
  long in_stack_00000028;
  
  iVar1 = -unaff_w20;
  if (unaff_w29 == 0) {
    iVar1 = unaff_w20;
  }
  *(int *)(in_stack_00000028 + 4) = *(int *)(in_stack_00000028 + 4) + iVar1;
  do {
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    if (((unaff_w23 >> 1 & 1) == 0) || (unaff_w28 != 0x20 && 4 < unaff_w28 - 9)) {
      if (((unaff_w23 >> 3 & 1) == 0) || ((unaff_w19 & 1) != 0)) {
LAB_0624ef94:
        if ((unaff_w28 == 0x29) && ((unaff_w19 >> 1 & 1) != 0)) {
          unaff_w19 = unaff_w19 & 0xfffffffd;
        }
        else {
          if (unaff_x25 == 0) {
LAB_0624eff4:
            if ((unaff_w19 >> 1 & 1) == 0) {
              if ((unaff_w19 >> 3 & 1) == 0) {
                if ((in_stack_00000010 & 1) == 0) {
                  *(undefined4 *)(in_stack_00000028 + 4) = 0;
                }
                if ((unaff_w19 >> 4 & 1) == 0) {
                  FUN_06251754(in_stack_00000028,0,0);
                }
              }
              uVar3 = 1;
            }
            else {
              uVar3 = 0;
            }
            *in_stack_00000008 = (ulong)unaff_x27;
            return uVar3;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          lVar2 = FUN_0624f078(unaff_x27);
          if (lVar2 == 0) goto LAB_0624eff4;
          unaff_x25 = 0;
          unaff_x27 = (ushort *)(lVar2 - 2);
        }
      }
      else {
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        lVar2 = FUN_0624f078(unaff_x27);
        if (lVar2 == 0) {
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          lVar2 = FUN_0624f078(unaff_x27);
          if (lVar2 == 0) goto LAB_0624ef94;
          FUN_06251754(in_stack_00000028,1,0);
        }
        unaff_w19 = unaff_w19 | 1;
        unaff_x27 = (ushort *)(lVar2 - 2);
      }
    }
    unaff_x27 = unaff_x27 + 1;
    unaff_w28 = 0;
    if (unaff_x27 < unaff_x24) {
      unaff_w28 = *unaff_x27;
    }
  } while( true );
}


