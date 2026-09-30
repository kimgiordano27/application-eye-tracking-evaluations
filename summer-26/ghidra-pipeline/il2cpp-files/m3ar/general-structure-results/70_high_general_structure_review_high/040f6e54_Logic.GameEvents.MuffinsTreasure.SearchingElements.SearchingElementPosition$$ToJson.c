/*
FUNCTION_NAME: Logic.GameEvents.MuffinsTreasure.SearchingElements.SearchingElementPosition$$ToJson
ENTRY_POINT: 040f6e54
PROGRAM: m3ar-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


bool Logic_GameEvents_MuffinsTreasure_SearchingElements_SearchingElementPosition__ToJson
               (undefined8 param_1,byte *param_2,long *param_3,undefined8 param_4,uint *param_5,
               ulong *param_6,ulong param_7)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 in_CY;
  uint in_w8;
  uint in_w9;
  uint *in_x10;
  byte *pbVar6;
  byte *in_x11;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  
  while (!(bool)in_CY) {
    bVar3 = *in_x11;
    if (param_7 < bVar3) {
      return (bool)2;
    }
    uVar7 = (uint)bVar3;
    if ((char)bVar3 < '\0') {
      if (uVar7 < 0xc2) {
        return (bool)2;
      }
      uVar8 = (uint)bVar3;
      uVar9 = (uint)bVar3;
      if (uVar7 < 0xe0) {
        if ((long)param_2 - (long)in_x11 < 2) {
          return true;
        }
        if ((in_x11[1] & 0xc0) != 0x80) {
          return (bool)2;
        }
        uVar10 = (ulong)in_x11[1] & 0x3f | ((ulong)uVar9 & 0x1f) << 6;
        if (param_7 < uVar10) {
          return (bool)2;
        }
        *in_x10 = (uint)uVar10;
        pbVar6 = in_x11 + 2;
      }
      else if (uVar8 < 0xf0) {
        if ((long)param_2 - (long)in_x11 < 2) {
          return true;
        }
        bVar4 = in_x11[1];
        if (uVar9 == 0xed) {
          bVar5 = bVar4 & 0xe0;
joined_r0x040f6f30:
          if (bVar5 != 0x80) {
            return (bool)2;
          }
        }
        else {
          if (uVar9 != 0xe0) {
            bVar5 = bVar4 & 0xc0;
            goto joined_r0x040f6f30;
          }
          if ((bVar4 & 0xe0) != 0xa0) {
            return (bool)2;
          }
        }
        if ((long)param_2 - (long)in_x11 == 2) {
          return true;
        }
        if (((in_x11[2] & 0xc0) != 0x80) ||
           (uVar10 = ((ulong)bVar3 & 0xf) << 0xc | ((ulong)bVar4 & 0x3f) << 6 |
                     (ulong)in_x11[2] & 0x3f, param_7 < uVar10)) {
          return (bool)2;
        }
        *in_x10 = (uint)uVar10;
        pbVar6 = in_x11 + 3;
      }
      else {
        if (0xf4 < uVar8) {
          return (bool)2;
        }
        lVar11 = (long)param_2 - (long)in_x11;
        if (lVar11 < 2) {
          return true;
        }
        bVar3 = in_x11[1];
        uVar7 = (uint)bVar3;
        if (uVar8 == 0xf4) {
          uVar2 = uVar7 & 0xf0;
joined_r0x040f6f84:
          if (uVar2 != 0x80) {
            return (bool)2;
          }
        }
        else {
          if (uVar8 != 0xf0) {
            uVar2 = uVar7 & 0xc0;
            goto joined_r0x040f6f84;
          }
          if (0x2f < (uVar7 + 0x70 & 0xff)) {
            return (bool)2;
          }
        }
        if (lVar11 == 2) {
          return true;
        }
        bVar4 = in_x11[2];
        if ((bVar4 & 0xc0) != 0x80) {
          return (bool)2;
        }
        if (lVar11 == 3) {
          return true;
        }
        bVar5 = in_x11[3];
        if ((bVar5 & 0xc0) != 0x80) {
          return (bool)2;
        }
        if ((long)param_5 - (long)in_x10 < 8) {
          return true;
        }
        if (param_7 < (((ulong)uVar8 & 7) << 0x12 | ((ulong)bVar3 & 0x3f) << 0xc |
                       ((ulong)bVar4 & 0x3f) << 6 | (ulong)bVar5 & 0x3f)) {
          return (bool)2;
        }
        in_x10[1] = bVar5 & 0x3f | (bVar4 & 0xf) << 6 | in_w9;
        *param_6 = (ulong)(in_x10 + 1);
        lVar11 = *param_3;
        *in_x10 = ((uVar7 & 0xf) << 2 | ((uVar9 & 7) << 2 | bVar3 >> 4 & 3) << 6 | bVar4 >> 4 & 3) -
                  0x40 | in_w8;
        pbVar6 = (byte *)(lVar11 + 4);
      }
    }
    else {
      *in_x10 = uVar7;
      pbVar6 = in_x11 + 1;
    }
    *param_3 = (long)pbVar6;
    puVar1 = (uint *)(*param_6 + 4);
    *param_6 = (ulong)puVar1;
    in_x11 = (byte *)*param_3;
    if (param_2 <= in_x11) break;
    in_x10 = puVar1;
    in_CY = param_5 <= puVar1;
  }
  return param_5 <= in_x10;
}


