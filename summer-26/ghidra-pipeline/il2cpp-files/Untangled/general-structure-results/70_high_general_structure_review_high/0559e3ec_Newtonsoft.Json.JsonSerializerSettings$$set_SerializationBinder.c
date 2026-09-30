/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_SerializationBinder
ENTRY_POINT: 0559e3ec
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_SerializationBinder(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  uint in_w8;
  ulong in_x9;
  ulong in_x11;
  int unaff_w19;
  uint unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  
  iVar5 = 0;
  uVar4 = in_w8 + (uint)((ulong)in_w8 * (in_x11 & 0xffffffff) >> 0x26) * -199;
  do {
    if (*(uint *)(unaff_x21 + 3) <= uVar4) {
LAB_0559e590:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    plVar6 = unaff_x21 + (long)(int)uVar4 + 4;
    lVar7 = *plVar6;
    if (lVar7 == 0) {
      lVar7 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d4f470);
      FUN_0559fe34();
      if ((lVar7 != 0) &&
         (lVar2 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*unaff_x21 + 0x40)), lVar2 == 0)) {
        uVar3 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar3,0);
      }
      if (uVar4 < *(uint *)(unaff_x21 + 3)) {
        *plVar6 = lVar7;
        thunk_FUN_02f411dc(plVar6,lVar7);
        return;
      }
      goto LAB_0559e590;
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
LAB_0559e58c:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if ((*(int *)(*(long *)(lVar7 + 0x10) + 0x10) <= *(int *)(unaff_x22 + 0x10)) &&
       (uVar1 = FUN_0559fa58(), (uVar1 & 1) != 0)) {
      if (*(long *)(lVar7 + 0x10) != 0) {
        if (*(int *)(*(long *)(lVar7 + 0x10) + 0x10) < *(int *)(unaff_x22 + 0x10)) {
          FUN_0559f88c();
          return;
        }
        uVar4 = *(uint *)(lVar7 + 0x18);
        if (((unaff_w20 & 0xff) == 0) || ((uVar4 & 0xff) != 0)) {
          if ((unaff_w20 & 0xff00) == 0) {
            return;
          }
          if ((uVar4 & 0xff00) != 0) {
            return;
          }
        }
        *(uint *)(lVar7 + 0x18) = uVar4 | unaff_w20;
        if (unaff_w19 == 0) {
          return;
        }
        *(int *)(lVar7 + 0x1c) = unaff_w19;
        return;
      }
      goto LAB_0559e58c;
    }
    uVar4 = uVar4 + in_w8 + ((uint)(in_x9 >> 7) & 0x1ffffff) * -0xc5 + 1;
    iVar5 = iVar5 + 1;
    if (0xc6 < (int)uVar4) {
      uVar4 = uVar4 - 199;
    }
    if (iVar5 == 199) {
      return;
    }
  } while( true );
}


