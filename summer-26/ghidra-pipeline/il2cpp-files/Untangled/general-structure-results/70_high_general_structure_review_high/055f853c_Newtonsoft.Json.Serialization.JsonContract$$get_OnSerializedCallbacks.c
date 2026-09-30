/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$get_OnSerializedCallbacks
ENTRY_POINT: 055f853c
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonContract__get_OnSerializedCallbacks(void)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined4 *unaff_x19;
  int *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  int unaff_w24;
  long *unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined1 unaff_w29;
  int iStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  do {
    FUN_02f07e70();
    *(undefined1 *)(unaff_x26 + 0xbf2) = unaff_w29;
    do {
      if ((int)*(uint *)(unaff_x21 + 1) <= unaff_w24) {
        *unaff_x19 = 6;
        return;
      }
      if (*(uint *)(unaff_x21 + 1) <= *(uint *)(unaff_x21 + 2)) goto LAB_055f8720;
      uVar4 = *(undefined2 *)(*unaff_x21 + (long)(int)*(uint *)(unaff_x21 + 2) * 2);
      *(undefined2 *)((long)unaff_x21 + 0x14) = uVar4;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar8 = FUN_05561fe8(uVar4,0);
      if ((uVar8 & 1) == 0) {
        uVar4 = *(undefined2 *)((long)unaff_x21 + 0x14);
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar8 = FUN_055ef198(uVar4,0);
        uVar3 = *(ushort *)((long)unaff_x21 + 0x14);
        if ((uVar8 & 1) != 0) {
          *unaff_x20 = uVar3 - 0x30;
          puVar7 = PTR_DAT_06d18930;
          uVar1 = *(uint *)(unaff_x21 + 2);
          uVar2 = uVar1;
          goto LAB_055f85dc;
        }
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar8 = FUN_05561fe8(uVar3,0);
        if ((uVar8 & 1) == 0) {
          if (unaff_x22 != 0) {
            FUN_0559f2f4();
            return;
          }
          goto LAB_055f8724;
        }
      }
      unaff_w24 = (int)unaff_x21[2] + 1;
      *(int *)(unaff_x21 + 2) = unaff_w24;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
    } while ((*(byte *)(unaff_x26 + 0xbf2) & 1) != 0);
  } while( true );
LAB_055f85dc:
  *(uint *)(unaff_x21 + 2) = uVar2 + 1;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  if ((*(byte *)(unaff_x26 + 0xbf2) & 1) == 0) {
    FUN_02f07e70(puVar7);
    *(undefined1 *)(unaff_x26 + 0xbf2) = 1;
  }
  uVar5 = *(uint *)(unaff_x21 + 2);
  if ((int)*(uint *)(unaff_x21 + 1) <= (int)(uVar2 + 1)) {
LAB_055f8650:
    if ((int)(uVar5 - uVar1) < 9) {
      if ((int)(uVar5 - uVar1) < 3) {
        uVar9 = 1;
      }
      else {
        uVar9 = 2;
      }
      *unaff_x19 = uVar9;
    }
    else {
      *unaff_x19 = 1;
      *unaff_x20 = -1;
    }
    if ((char)unaff_x21[4] != '\0') {
      lVar6 = unaff_x21[2];
      uVar4 = *(undefined2 *)((long)unaff_x21 + 0x14);
      *(uint *)(unaff_x21 + 2) = uVar1;
      if (*(uint *)(unaff_x21 + 1) <= uVar1) {
LAB_055f8720:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      *(undefined2 *)((long)unaff_x21 + 0x14) = *(undefined2 *)(*unaff_x21 + (long)(int)uVar1 * 2);
      if (unaff_x22 == 0) {
LAB_055f8724:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar8 = FUN_0559f2f4();
      if ((uVar8 & 1) == 0) {
        *(int *)(unaff_x21 + 2) = (int)lVar6;
        *(undefined2 *)((long)unaff_x21 + 0x14) = uVar4;
      }
      else {
        *unaff_x19 = uStack000000000000000c;
        *unaff_x20 = iStack0000000000000008;
      }
    }
    return;
  }
  if (*(uint *)(unaff_x21 + 1) <= uVar5) goto LAB_055f8720;
  uVar3 = *(ushort *)(*unaff_x21 + (long)(int)uVar5 * 2);
  *(ushort *)((long)unaff_x21 + 0x14) = uVar3;
  if (9 < uVar3 - 0x30) goto LAB_055f8650;
  *unaff_x20 = (uint)uVar3 + *unaff_x20 * 10 + -0x30;
  uVar2 = *(uint *)(unaff_x21 + 2);
  goto LAB_055f85dc;
}


