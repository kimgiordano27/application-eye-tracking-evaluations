/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.LayerMask_DirectConverter$$DoSerialize
ENTRY_POINT: 036dc038
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__DoSerialize(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char in_NG;
  char in_OV;
  short sVar5;
  undefined8 uVar6;
  long lVar7;
  long in_x9;
  long in_x10;
  long unaff_x19;
  uint unaff_w20;
  undefined4 unaff_w21;
  
  if (in_NG == in_OV) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar4 = (uint)in_x10 - 1;
    if (uVar4 < uVar2) {
      lVar7 = param_1 + (long)(int)uVar4 * 0x178;
      iVar1 = *(int *)(lVar7 + 0x28) + *(int *)(lVar7 + 0x24);
      *(int *)(unaff_x19 + 0x234) = iVar1;
      if ((uint)in_x9 < uVar2) {
        iVar3 = *(int *)(param_1 + in_x9 * 0x178 + 0x24);
        lVar7 = *(long *)(unaff_x19 + 0x220);
        *(int *)(unaff_x19 + 0x238) = iVar3;
        if (lVar7 == 0) goto LAB_036dc0d4;
        iVar1 = iVar1 - iVar3;
        goto LAB_036dbf54;
      }
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x18);
    if ((uint)in_x10 < uVar2) {
      iVar3 = *(int *)(param_1 + in_x10 * 0x178 + 0x24);
      *(int *)(unaff_x19 + 0x234) = iVar3;
      if ((uint)(in_x9 + -1) < uVar2) {
        param_1 = param_1 + (in_x9 + -1) * 0x178;
        lVar7 = *(long *)(unaff_x19 + 0x220);
        iVar1 = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x24);
        *(int *)(unaff_x19 + 0x238) = iVar1;
        if (lVar7 == 0) {
LAB_036dc0d4:
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        iVar1 = iVar1 - iVar3;
LAB_036dbf54:
        uVar6 = FUN_02ee80dc(lVar7,iVar3,iVar1,0);
        lVar7 = *(long *)(unaff_x19 + 0x1f0);
        if (lVar7 == 0) {
          if (*(int *)(unaff_x19 + 0x198) != 0) {
            if (*(int *)(unaff_x19 + 0x198) == 8) {
              sVar5 = FUN_036d7e64();
              if (sVar5 != 0) {
                FUN_036d3efc();
                FUN_036d3a30();
                return;
              }
              return;
            }
            unaff_w20 = FUN_036d7e64();
          }
        }
        else {
          unaff_w20 = (**(code **)(lVar7 + 0x18))
                                (*(undefined8 *)(lVar7 + 0x40),uVar6,unaff_w21,unaff_w20,
                                 *(undefined8 *)(lVar7 + 0x28));
        }
        if ((unaff_w20 & 0xffff) != 0) {
          FUN_036dc0dc();
          return;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


