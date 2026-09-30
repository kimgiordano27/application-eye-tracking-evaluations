/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HasNoDefinedType
ENTRY_POINT: 01bbbdd0
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HasNoDefinedType
               (undefined8 param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int in_w8;
  long in_x9;
  uint in_w10;
  uint in_w11;
  long lVar4;
  long in_x12;
  ushort *puVar5;
  int in_w13;
  uint uVar6;
  int iVar7;
  
code_r0x01bbbdd0:
  if (in_x12 != 0) {
    if (in_w13 < 0xb) {
      if (0x11 < *(uint *)(in_x12 + 0x18)) {
        puVar5 = (ushort *)(in_x12 + 0x42);
        uVar6 = (uint)*puVar5;
        goto LAB_01bbbdfc;
      }
    }
    else if (0x12 < *(uint *)(in_x12 + 0x18)) {
      puVar5 = (ushort *)(in_x12 + 0x44);
      uVar6 = (uint)*puVar5;
LAB_01bbbdfc:
      iVar7 = uVar6 + 1;
      uVar6 = in_w11;
      do {
        *puVar5 = (ushort)iVar7;
        if (in_w8 <= (int)in_w10) {
          return;
        }
        if (in_x9 == 0) goto LAB_01bbbe18;
        uVar1 = *(uint *)(in_x9 + 0x18);
        if (uVar1 <= in_w10) break;
        bVar2 = *(byte *)(in_x9 + (int)in_w10 + 0x20);
        in_w11 = (uint)bVar2;
        if (bVar2 == 0) {
          iVar7 = 0x8b;
LAB_01bbbcf4:
          in_w13 = 1;
        }
        else {
          if (uVar6 == bVar2) {
            iVar7 = 7;
            goto LAB_01bbbcf4;
          }
          if ((param_2 == 0) || (lVar4 = *(long *)(param_2 + 0x10), lVar4 == 0)) goto LAB_01bbbe18;
          if (*(uint *)(lVar4 + 0x18) <= in_w11) break;
          lVar4 = lVar4 + (ulong)bVar2 * 2;
          in_w13 = 0;
          iVar7 = 7;
          *(short *)(lVar4 + 0x20) = *(short *)(lVar4 + 0x20) + 1;
        }
        uVar3 = (iVar7 + in_w10) - in_w13;
        uVar6 = in_w10;
        while (uVar6 = uVar6 + 1, in_w10 = uVar6, (int)uVar6 < in_w8) {
          if (uVar1 <= uVar6) goto LAB_01bbbe14;
          if ((in_w11 != *(byte *)(in_x9 + (int)uVar6 + 0x20)) ||
             (in_w13 = in_w13 + 1, in_w10 = uVar3, iVar7 + -1 == in_w13)) break;
        }
        if (2 < in_w13) goto code_r0x01bbbd7c;
        if ((param_2 == 0) || (lVar4 = *(long *)(param_2 + 0x10), lVar4 == 0)) goto LAB_01bbbe18;
        if (*(uint *)(lVar4 + 0x18) <= in_w11) break;
        puVar5 = (ushort *)(lVar4 + (ulong)(uint)bVar2 * 2 + 0x20);
        iVar7 = (uint)*puVar5 + in_w13;
        uVar6 = in_w11;
      } while( true );
    }
LAB_01bbbe14:
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc();
  }
LAB_01bbbe18:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
code_r0x01bbbd7c:
  if (bVar2 == 0) goto LAB_01bbbdc8;
  if ((param_2 == 0) || (lVar4 = *(long *)(param_2 + 0x10), lVar4 == 0)) goto LAB_01bbbe18;
  if (*(uint *)(lVar4 + 0x18) < 0x11) goto LAB_01bbbe14;
  puVar5 = (ushort *)(lVar4 + 0x40);
  uVar6 = (uint)*puVar5;
  goto LAB_01bbbdfc;
LAB_01bbbdc8:
  if (param_2 == 0) goto LAB_01bbbe18;
  in_x12 = *(long *)(param_2 + 0x10);
  goto code_r0x01bbbdd0;
}


