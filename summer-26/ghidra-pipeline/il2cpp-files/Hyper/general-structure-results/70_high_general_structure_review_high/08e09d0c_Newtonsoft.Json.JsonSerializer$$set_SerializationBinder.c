/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_SerializationBinder
ENTRY_POINT: 08e09d0c
PROGRAM: Hyper-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_SerializationBinder(void)

{
  byte bVar1;
  undefined1 in_w8;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  long unaff_x21;
  long lVar6;
  
  *(undefined1 *)(unaff_x21 + 0xc45) = in_w8;
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    plVar5 = *(long **)(unaff_x19 + 0x10);
    FUN_07ac8724();
    if (plVar5 != (long *)0x0) {
      lVar2 = *plVar5;
      lVar6 = *(long *)PTR_DAT_0ac6a4d8;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)(lVar6 + 0x20)) {
            lVar2 = lVar2 + (long)(int)(*piVar4 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
            goto FUN_08e09da0;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      lVar2 = FUN_04980e68(plVar5);
FUN_08e09da0:
      lVar2 = thunk_FUN_04965bc0(*(undefined8 *)(lVar2 + 8),lVar6);
      plVar5 = (long *)(**(code **)(lVar2 + 8))(plVar5,0,0,0,lVar2);
      if (plVar5 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_0ac6a4e0 + 0x130);
        if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0ac6a4e0
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_0494850c();
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


