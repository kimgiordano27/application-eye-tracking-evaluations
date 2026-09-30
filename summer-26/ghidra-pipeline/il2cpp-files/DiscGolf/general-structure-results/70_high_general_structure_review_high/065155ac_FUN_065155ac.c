/*
FUNCTION_NAME: FUN_065155ac
ENTRY_POINT: 065155ac
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_065155ac(long param_1,long param_2,uint param_3,int param_4,ulong *param_5,ulong *param_6,
                 uint param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  byte bVar8;
  undefined4 uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  ulong local_110;
  ulong uStack_108;
  undefined8 local_100;
  ulong local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  ulong local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  ulong local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  
  lVar11 = param_1;
  if ((DAT_06dcd81b & 1) == 0) {
    FUN_02d965b8(
                Field_UnityEngine_UI_Extensions_ReorderableList_ReorderableListEventStruct_DroppedObject
                );
    FUN_02d965b8(Field_UnityEngine_TextCore_RichTextTagParser_Segment_tags);
    FUN_02d965b8(PTR_DAT_069fb930);
    FUN_02d965b8(PTR_DAT_069fbb48);
    FUN_02d965b8(Field_UnityEngine_TextCore_RichTextTagParser_Tag_value);
    FUN_02d965b8(Field_System_IO_Compression_Zip64ExtraField__uncompressedSize);
    FUN_02d965b8(Field_UnityEngine_Rendering_STP_Config_noiseTexture);
    FUN_02d965b8(
                Method_Unity_Services_Vivox_VivoxCoreInstancePINVOKE_SWIGExceptionHelper_SetPendingArgumentNullException__
                );
    FUN_02d965b8(Field_UnityEngine_SendMouseEvents_HitInfo_target);
    FUN_02d965b8(Field_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_this_);
    lVar11 = FUN_02d965b8(
                         Field_Unity_Netcode_Transports_SinglePlayer_SinglePlayerTransport_MessageData_Payload
                         );
    DAT_06dcd81b = 1;
  }
  plVar14 = (long *)PTR_DAT_069fb930;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  if (*(uint *)(param_1 + 0x34) < param_3) {
    FUN_06514d5c(param_1);
    lVar11 = *(long *)(param_1 + 0x28);
    if (lVar11 == 0) {
      lVar17 = 0;
LAB_06515784:
      puVar5 = 
      Method_Unity_Services_Vivox_VivoxCoreInstancePINVOKE_SWIGExceptionHelper_SetPendingArgumentNullException__
      ;
      uVar10 = param_3;
      if (*(int *)(*(long *)
                    Method_Unity_Services_Vivox_VivoxCoreInstancePINVOKE_SWIGExceptionHelper_SetPendingArgumentNullException__
                  + 0xe4) == 0) {
        thunk_FUN_02df485c();
        if (0xffff < param_3) {
          uVar10 = 2;
        }
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
      }
      else if (0xffff < param_3) {
        uVar10 = 2;
      }
      if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_0630c4b4(param_3 < 0x10000,
                   *(undefined8 *)
                    Field_Unity_Netcode_Transports_SinglePlayer_SinglePlayerTransport_MessageData_Payload
                   ,0);
      uVar3 = *(undefined1 *)(param_1 + 0x10);
      lVar13 = thunk_FUN_02dd3144(*(undefined8 *)Field_UnityEngine_Rendering_STP_Config_noiseTexture
                                 );
      FUN_0651a09c(lVar13,uVar10,param_4,4,uVar3,0);
      plVar14 = (long *)(param_1 + 0x28);
      lVar11 = param_1;
      if (lVar17 != 0) {
        plVar14 = (long *)(lVar17 + 0x28);
        lVar11 = lVar17;
      }
      *(long *)(lVar11 + 0x28) = lVar13;
      LeanTween__value(plVar14,lVar13);
      if (lVar13 == 0) goto LAB_06515ca0;
    }
    else {
      uVar10 = 0x7fffffff;
      lVar15 = 0;
      do {
        lVar17 = lVar11;
        if ((*(long *)(lVar17 + 0x18) == 0) || (*(long *)(lVar17 + 0x20) == 0)) goto LAB_06515ca0;
        iVar1 = *(int *)(*(long *)(lVar17 + 0x20) + 0x28);
        uVar4 = *(int *)(*(long *)(lVar17 + 0x18) + 0x28) - param_3;
        bVar8 = FUN_0651a29c(lVar17,0);
        lVar13 = lVar17;
        if ((bVar8 & -1 < (int)(iVar1 - param_4 | uVar4) & (int)uVar4 < (int)uVar10) == 0) {
          lVar13 = lVar15;
          uVar4 = uVar10;
        }
        uVar10 = uVar4;
        lVar11 = *(long *)(lVar17 + 0x28);
        lVar15 = lVar13;
      } while (*(long *)(lVar17 + 0x28) != 0);
      if (lVar13 == 0) goto LAB_06515784;
    }
    plVar14 = (long *)PTR_DAT_069fb930;
    if ((*(long *)(lVar13 + 0x18) == 0) ||
       (lVar11 = *(long *)(*(long *)(lVar13 + 0x18) + 0x40), lVar11 == 0)) goto LAB_06515ca0;
    FUN_06519e78(&local_b8,lVar11,param_3,param_7 & 1,0);
    uStack_78 = uStack_b0;
    local_80 = local_b8;
    local_70 = local_a8;
    if ((*(long *)(lVar13 + 0x20) == 0) ||
       (lVar11 = *(long *)(*(long *)(lVar13 + 0x20) + 0x40), lVar11 == 0)) goto LAB_06515ca0;
    FUN_06519e78(&local_d0,lVar11,param_4,param_7 & 1,0);
    uStack_98 = uStack_c8;
    local_a0 = local_d0;
    local_90 = local_c0;
  }
  else {
    plVar16 = (long *)(param_1 + 0x28);
    lVar13 = *plVar16;
    if (lVar13 == 0) {
      FUN_06514d5c(param_1);
    }
    else {
      uVar12 = FUN_06516720(lVar11,lVar13,param_3,param_4,&local_80,&local_a0,param_7 & 1);
      while (((uVar12 & 1) == 0 && (lVar11 = *(long *)(lVar13 + 0x28), lVar11 != 0))) {
        uVar12 = FUN_06516720(uVar12,lVar11,param_3,param_4,&local_80,&local_a0,param_7 & 1);
        lVar13 = lVar11;
      }
    }
    if (local_a0._4_4_ == 0) {
      iVar1 = *(int *)(param_1 + 0x30) << 1;
      lVar11 = *(long *)PTR_DAT_069fbb48;
      *(int *)(param_1 + 0x30) = iVar1;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar9 = FUN_054e9164(iVar1,param_3 << 1,0);
      puVar5 = 
      Method_Unity_Services_Vivox_VivoxCoreInstancePINVOKE_SWIGExceptionHelper_SetPendingArgumentNullException__
      ;
      *(undefined4 *)(param_1 + 0x30) = uVar9;
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar10 = FUN_054e92b4(uVar9,0xffff,0);
      *(uint *)(param_1 + 0x30) = uVar10;
      uVar9 = FUN_054e9164((int)(*(float *)(param_1 + 0x38) * (float)uVar10 + 0.5),param_4 << 1,0);
      if (lVar13 == 0) {
        bVar7 = true;
      }
      else {
        bVar7 = *(long *)(lVar13 + 0x28) == 0;
      }
      if (*(int *)(*plVar14 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_0630c384(bVar7,0);
      uVar2 = *(undefined4 *)(param_1 + 0x30);
      uVar3 = *(undefined1 *)(param_1 + 0x10);
      lVar13 = thunk_FUN_02dd3144(*(undefined8 *)Field_UnityEngine_Rendering_STP_Config_noiseTexture
                                 );
      FUN_0651a09c(lVar13,uVar2,uVar9,4,uVar3,0);
      if (lVar13 == 0) goto LAB_06515ca0;
      *(long *)(lVar13 + 0x28) = *plVar16;
      LeanTween__value();
      *plVar16 = lVar13;
      LeanTween__value(plVar16,lVar13);
      plVar14 = (long *)PTR_DAT_069fb930;
      if ((*(long *)(lVar13 + 0x18) == 0) ||
         (lVar11 = *(long *)(*(long *)(lVar13 + 0x18) + 0x40), lVar11 == 0)) goto LAB_06515ca0;
      FUN_06519e78(&local_b8,lVar11,param_3,param_7 & 1,0);
      uStack_78 = uStack_b0;
      local_80 = local_b8;
      local_70 = local_a8;
      if ((*(long *)(lVar13 + 0x20) == 0) ||
         (lVar11 = *(long *)(*(long *)(lVar13 + 0x20) + 0x40), lVar11 == 0)) goto LAB_06515ca0;
      FUN_06519e78(&local_d0,lVar11,param_4,param_7 & 1,0);
      uStack_98 = uStack_c8;
      local_a0 = local_d0;
      local_90 = local_c0;
      FUN_0630c384(local_80._4_4_ != 0,0);
      FUN_0630c384(local_a0._4_4_ != 0,0);
    }
  }
  puVar6 = Field_System_Xml_Schema_SequenceNode_SequenceConstructPosContext_this_;
  puVar5 = Field_UnityEngine_SendMouseEvents_HitInfo_target;
  uVar10 = local_80._4_4_;
  if (*(int *)(*plVar14 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_0630c4b4(uVar10 == param_3,*(undefined8 *)puVar5,0);
  FUN_0630c4b4(local_a0._4_4_ == param_4,*(undefined8 *)puVar6,0);
  if ((local_80._4_4_ != param_3) || (local_a0._4_4_ != param_4)) {
    if (uStack_78 != 0) {
      if (((lVar13 == 0) || (*(long *)(lVar13 + 0x18) == 0)) ||
         (lVar11 = *(long *)(*(long *)(lVar13 + 0x18) + 0x40), lVar11 == 0)) goto LAB_06515ca0;
      uStack_e8 = uStack_78;
      local_f0 = local_80;
      local_e0 = local_70;
      FUN_06519fec(lVar11,&local_f0,0);
    }
    if (uStack_98 != 0) {
      if (((lVar13 == 0) || (*(long *)(lVar13 + 0x18) == 0)) ||
         (lVar11 = *(long *)(*(long *)(lVar13 + 0x18) + 0x40), lVar11 == 0)) goto LAB_06515ca0;
      uStack_108 = uStack_98;
      local_110 = local_a0;
      local_100 = local_90;
      FUN_06519fec(lVar11,&local_110,0);
    }
    param_3 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_78 = 0;
    local_70 = 0;
    local_80 = 0;
  }
  if ((lVar13 != 0) && (*(long *)(lVar13 + 0x18) != 0)) {
    FUN_04bb13e0(*(long *)(lVar13 + 0x18),local_80 & 0xffffffff,param_3,
                 *(undefined8 *)
                  Field_UnityEngine_UI_Extensions_ReorderableList_ReorderableListEventStruct_DroppedObject
                );
    if (*(long *)(lVar13 + 0x20) != 0) {
      FUN_04bb0c58(*(long *)(lVar13 + 0x20),local_a0 & 0xffffffff,local_a0._4_4_,
                   *(undefined8 *)Field_UnityEngine_TextCore_RichTextTagParser_Segment_tags);
      lVar11 = *(long *)(lVar13 + 0x18);
      if (lVar11 != 0) {
        local_b8 = 0;
        uStack_b0 = 0;
        FUN_042e21e0(&local_b8,*(undefined8 *)(lVar11 + 0x20),*(undefined8 *)(lVar11 + 0x28),
                     local_80 & 0xffffffff,local_80._4_4_,
                     *(undefined8 *)Field_UnityEngine_TextCore_RichTextTagParser_Tag_value);
        param_5[1] = uStack_b0;
        *param_5 = local_b8;
        lVar11 = *(long *)(lVar13 + 0x20);
        if (lVar11 != 0) {
          local_d0 = 0;
          uStack_c8 = 0;
          FUN_042e1c60(&local_d0,*(undefined8 *)(lVar11 + 0x20),*(undefined8 *)(lVar11 + 0x28),
                       local_a0 & 0xffffffff,local_a0._4_4_,
                       *(undefined8 *)Field_System_IO_Compression_Zip64ExtraField__uncompressedSize)
          ;
          param_6[1] = uStack_c8;
          *param_6 = local_d0;
          if (param_2 != 0) {
            *(long *)(param_2 + 0x50) = lVar13;
            LeanTween__value((long *)(param_2 + 0x50),lVar13);
            *(ulong *)(param_2 + 0x20) = uStack_78;
            *(ulong *)(param_2 + 0x18) = local_80;
            *(undefined8 *)(param_2 + 0x28) = local_70;
            LeanTween__value(param_2 + 0x20,0);
            *(ulong *)(param_2 + 0x38) = uStack_98;
            *(ulong *)(param_2 + 0x30) = local_a0;
            *(undefined8 *)(param_2 + 0x40) = local_90;
            LeanTween__value(param_2 + 0x38,0);
            *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_1 + 0x70);
            return;
          }
        }
      }
    }
  }
LAB_06515ca0:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


