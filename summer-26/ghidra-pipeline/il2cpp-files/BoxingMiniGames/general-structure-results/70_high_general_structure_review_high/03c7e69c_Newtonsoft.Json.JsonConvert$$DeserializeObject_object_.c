/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<object>
ENTRY_POINT: 03c7e69c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03c7e8b8) */

void Newtonsoft_Json_JsonConvert__DeserializeObject<object>(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  int iVar6;
  long in_x9;
  ulong in_x10;
  int *piVar7;
  uint in_w11;
  undefined4 unaff_w19;
  long unaff_x20;
  int unaff_w23;
  int iVar8;
  long *unaff_x24;
  long *unaff_x27;
  
  do {
    iVar8 = unaff_w23;
    if ((((uint)in_x10 <= in_w11) &&
        (*(long *)(*(long *)(in_x9 + 200) + in_x10 * 8 + -8) == param_1)) &&
       (uVar1 = FUN_07472c78(unaff_x24,0), (uVar1 & 1) == 0)) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      plVar2 = (long *)(**(code **)(unaff_x20 + 0x18))
                                 (*(undefined8 *)(unaff_x20 + 0x40),unaff_w19,
                                  *(undefined8 *)(unaff_x20 + 0x28));
      lVar3 = (**(code **)(*unaff_x24 + 0x3f8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x400));
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      plVar2[7] = lVar3;
      thunk_FUN_036b7ad0(plVar2 + 7);
      plVar4 = (long *)(**(code **)(*unaff_x24 + 0x3f8))
                                 (unaff_x24,*(undefined8 *)(*unaff_x24 + 0x400));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      (**(code **)(*plVar4 + 0x188))(plVar4,plVar2,*(undefined8 *)(*plVar4 + 400));
      lVar3 = (**(code **)(*unaff_x24 + 0x278))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x280));
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar3 = FUN_0745db10(lVar3,0);
      if (lVar3 == 0) {
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar1 = FUN_07448b70(plVar2,0);
        iVar6 = 4;
        if ((uVar1 & 1) == 0) {
          iVar6 = 0xc;
        }
      }
      else {
        FUN_0745f7a4();
        iVar6 = 4;
      }
      if (plVar2 != (long *)0x0) {
        lVar3 = *plVar2;
        uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar1 != 0) {
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_079f4598) {
              puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_03c7e800;
            }
            uVar1 = uVar1 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar1 != 0);
        }
        puVar5 = (undefined8 *)FUN_0367cd30(plVar2,*(long *)PTR_DAT_079f4598,0);
LAB_03c7e800:
        (*(code *)*puVar5)(plVar2,puVar5[1]);
      }
      if ((iVar6 != 0xc) && (iVar6 != 0)) {
        return;
      }
    }
    do {
      unaff_w23 = iVar8 + -1;
      if (iVar8 < 1) {
        return;
      }
      unaff_x24 = (long *)FUN_0459ed6c();
      iVar8 = unaff_w23;
    } while (unaff_x24 == (long *)0x0);
    param_1 = *unaff_x27;
    in_x9 = *unaff_x24;
    in_w11 = (uint)*(byte *)(in_x9 + 0x130);
    in_x10 = (ulong)*(byte *)(param_1 + 0x130);
  } while( true );
}


