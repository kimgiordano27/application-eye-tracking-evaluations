/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteReference
ENTRY_POINT: 05e9adf0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteReference(void)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  ushort *unaff_x23;
  uint unaff_w25;
  undefined1 *unaff_x26;
  undefined1 *unaff_x27;
  ushort *unaff_x28;
  ushort *in_stack_00000008;
  
code_r0x05e9adf0:
  plVar2 = (long *)FUN_05e9ab94();
LAB_05e9ae0c:
  if (plVar2 != (long *)0x0) {
    FUN_05c9f144(plVar2);
LAB_05e9ae30:
    in_stack_00000008 = unaff_x28;
    (**(code **)(*plVar2 + 0x1d8))
              (plVar2,unaff_w25,&stack0x00000008,*(undefined8 *)(*plVar2 + 0x1e0));
    unaff_x28 = in_stack_00000008;
    do {
      if (plVar2 == (long *)0x0) {
        unaff_w25 = 0;
LAB_05e9adbc:
        if (unaff_x23 <= unaff_x28) goto LAB_05e9ae90;
      }
      else {
        uVar1 = FUN_05c9f180(plVar2,0);
        unaff_w25 = uVar1 & 0xffff;
        if (unaff_w25 == 0) goto LAB_05e9adbc;
      }
      if (unaff_w25 == 0) {
        unaff_w25 = (uint)*unaff_x28;
        unaff_x28 = unaff_x28 + 1;
      }
      if (0x7f < unaff_w25) goto LAB_05e9ade4;
      if (unaff_x26 <= unaff_x27) {
        if ((plVar2 == (long *)0x0) || (*(char *)((long)plVar2 + 0x2a) == '\0')) {
          unaff_x28 = unaff_x28 + -1;
        }
        else {
          (**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0));
        }
        FUN_05cb0530();
LAB_05e9ae90:
        if (unaff_x19 != 0) {
          if ((plVar2 != (long *)0x0) && (*(char *)((long)plVar2 + 0x29) == '\0')) {
            *(undefined2 *)(unaff_x19 + 0x20) = 0;
          }
          uVar3 = (long)unaff_x28 - unaff_x21;
          if ((long)uVar3 < 0) {
            uVar3 = uVar3 + 1;
          }
          *(int *)(unaff_x19 + 0x34) = (int)(uVar3 >> 1);
        }
        return (int)unaff_x27 - unaff_w20;
      }
      *unaff_x27 = (char)unaff_w25;
      unaff_x27 = unaff_x27 + 1;
    } while( true );
  }
  goto LAB_05e9af7c;
LAB_05e9ade4:
  if (plVar2 == (long *)0x0) goto code_r0x05e9ade8;
  goto LAB_05e9ae30;
code_r0x05e9ade8:
  if (unaff_x19 != 0) goto code_r0x05e9adf0;
  plVar2 = *(long **)(unaff_x22 + 0x28);
  if (plVar2 == (long *)0x0) {
LAB_05e9af7c:
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  plVar2 = (long *)(**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(*plVar2 + 0x180));
  goto LAB_05e9ae0c;
}


