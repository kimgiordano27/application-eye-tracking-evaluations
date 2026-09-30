/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<object>
ENTRY_POINT: 03c7e7f4
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


void Newtonsoft_Json_JsonConvert__DeserializeObject<object>(long param_1)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  int *in_x10;
  undefined4 unaff_w19;
  long unaff_x20;
  int unaff_w23;
  int iVar7;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x27;
  int unaff_w28;
  
code_r0x03c7e7f4:
  puVar6 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  do {
    (*(code *)*puVar6)(unaff_x25,puVar6[1]);
    do {
      if (unaff_x24 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c00(unaff_x24);
      }
      iVar7 = unaff_w23;
      if ((unaff_w28 != 0xc) && (unaff_w28 != 0)) {
        return;
      }
      do {
        do {
          unaff_w23 = iVar7 + -1;
          if (iVar7 < 1) {
            return;
          }
          plVar2 = (long *)FUN_0459ed6c();
          iVar7 = unaff_w23;
        } while (plVar2 == (long *)0x0);
        bVar1 = *(byte *)(*unaff_x27 + 0x130);
      } while (((*(byte *)(*plVar2 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x27)) ||
              (uVar3 = FUN_07472c78(plVar2,0), (uVar3 & 1) != 0));
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      unaff_x25 = (long *)(**(code **)(unaff_x20 + 0x18))
                                    (*(undefined8 *)(unaff_x20 + 0x40),unaff_w19,
                                     *(undefined8 *)(unaff_x20 + 0x28));
      lVar4 = (**(code **)(*plVar2 + 0x3f8))(plVar2,*(undefined8 *)(*plVar2 + 0x400));
      if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      unaff_x25[7] = lVar4;
      thunk_FUN_036b7ad0(unaff_x25 + 7);
      plVar5 = (long *)(**(code **)(*plVar2 + 0x3f8))(plVar2,*(undefined8 *)(*plVar2 + 0x400));
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      (**(code **)(*plVar5 + 0x188))(plVar5,unaff_x25,*(undefined8 *)(*plVar5 + 400));
      lVar4 = (**(code **)(*plVar2 + 0x278))(plVar2,*(undefined8 *)(*plVar2 + 0x280));
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar4 = FUN_0745db10(lVar4,0);
      if (lVar4 == 0) {
        if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar3 = FUN_07448b70(unaff_x25,0);
        unaff_w28 = 4;
        if ((uVar3 & 1) == 0) {
          unaff_w28 = 0xc;
        }
      }
      else {
        FUN_0745f7a4();
        unaff_w28 = 4;
      }
      unaff_x24 = 0;
    } while (unaff_x25 == (long *)0x0);
    param_1 = *unaff_x25;
    uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar3 != 0) {
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(in_x10 + -2) == *(long *)PTR_DAT_079f4598) goto code_r0x03c7e7f4;
        uVar3 = uVar3 - 1;
        in_x10 = in_x10 + 4;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)FUN_0367cd30(unaff_x25,*(long *)PTR_DAT_079f4598,0);
  } while( true );
}


