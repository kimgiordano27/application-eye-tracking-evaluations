/*
FUNCTION_NAME: FUN_021f1bec
ENTRY_POINT: 021f1bec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_18;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_3
*/


long * FUN_021f1bec(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined1 *param_6,undefined8 *param_7,uint param_8,
                   long param_9)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  ulong uVar13;
  long *plVar14;
  undefined1 auStack_3c0 [208];
  undefined1 auStack_2f0 [208];
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [208];
  
  if ((DAT_037817fd & 1) == 0) {
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<Type,_List<ValueTuple<MethodInfo,_DebugMember>>>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<HoverEnterEventArgs>_Invoke__);
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00000D6D_PostfixBurstDelegate_var
                      );
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Interactor<HandGrabInteractor,_HandGrabInteractable>_get_State__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_MouseEventBase<MouseEnterWindowEvent>_Init__);
    thunk_FUN_00d48444(Meta_WitAi_Json_JSONBinaryTag_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<SelectionType>_set_defaultValue__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f0f28);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Stack<Random_State>__ctor__);
    DAT_037817fd = 1;
  }
  memset(auStack_130,0,0xd0);
  uStack_138 = 0;
  local_140 = 0;
  if (param_9 == 0) {
    uVar10 = *param_7;
    uVar11 = param_7[1];
  }
  else {
    local_220 = 0;
    uStack_218 = 0;
    FUN_021f605c(&local_220,param_9,0);
    uVar10 = local_220;
    uVar11 = uStack_218;
  }
  uVar5 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ(param_7[2],param_7[3],0);
  uVar6 = FUN_015ff8a0(uVar5,0);
  puVar2 = PTR_DAT_033ebeb0;
  if ((uVar6 & 1) != 0) {
    local_220 = *param_7;
    uStack_218 = param_7[1];
    uVar10 = thunk_FUN_00d48444(PTR_DAT_033ebeb0);
    uVar10 = thunk_FUN_00d61fa0(uVar10,&local_220);
    FUN_00ac2be8(param_2);
    local_150 = *(undefined8 *)(param_2 + 0x10);
    local_148 = *(undefined8 *)(param_2 + 0x18);
    uVar11 = thunk_FUN_00d48444(puVar2);
    uVar11 = thunk_FUN_00d61fa0(uVar11,&local_150);
    uVar5 = thunk_FUN_00d48444(StringLiteral_10250);
    uVar10 = FUN_01600b5c(uVar5,uVar10,uVar11,0);
    thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
    uVar11 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_017713a8(uVar11,uVar10,0);
    uVar10 = thunk_FUN_00d48444(StringLiteral_653);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar11,uVar10);
  }
  if (param_1[2] != 0) {
    uVar5 = FUN_021f23fc(param_1,param_5,uVar10,uVar11);
    if (param_1[2] == 0) goto LAB_021f2164;
    uVar6 = FUN_0129eff4(param_1[2],uVar5,auStack_130,
                         *(undefined8 *)
                          Method_Oculus_Interaction_Interactor<HandGrabInteractor,_HandGrabInteractable>_get_State__
                        );
    if ((uVar6 & 1) != 0) {
      memcpy(auStack_2f0,param_7,0xd0);
      FUN_021eb5c4(&local_220,auStack_130,auStack_2f0);
      memcpy(param_7,&local_220,0xd0);
    }
  }
  plVar7 = (long *)FUN_021efc98(param_1,param_7[2],param_7[3],param_3,param_4,uVar10,uVar11,param_5)
  ;
  if ((*param_1 != 0) && (plVar14 = *(long **)(*param_1 + 0x150), plVar14 != (long *)0x0)) {
    if ((plVar7 != (long *)0x0) &&
       (lVar8 = thunk_FUN_00d6225c(plVar7,*(undefined8 *)(*plVar14 + 0x40)), lVar8 == 0)) {
LAB_021f216c:
      uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar10,0);
    }
    if (*(uint *)(plVar14 + 3) <= param_8) {
LAB_021f2168:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar14[(long)(int)param_8 + 4] = (long)plVar7;
    if (plVar7 != (long *)0x0) {
      FUN_02144088(plVar7,*(uint *)(param_7 + 0x13) >> 1 & 1,0);
      FUN_0214417c(plVar7,*(uint *)(param_7 + 0x13) >> 2 & 1,0);
      uVar3 = FUN_015ff8a0(param_7[6],0);
      FUN_021454a0(plVar7,~uVar3 & 1,0);
      uVar6 = FUN_0214407c(plVar7,0);
      if (((uVar6 & 1) == 0) && ((*(byte *)(param_7 + 0x13) >> 4 & 1) == 0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_02145494(plVar7,0);
        uVar3 = ~uVar3 & 1;
      }
      FUN_02145478(plVar7,uVar3,0);
      uVar6 = FUN_0214407c(plVar7,0);
      if ((uVar6 & 1) != 0) {
        if (*param_1 == 0) goto LAB_021f2164;
        FUN_02144088(*param_1,1,0);
      }
      bVar1 = *(byte *)(*(long *)
                         UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00000D6D_PostfixBurstDelegate_var
                       + 300);
      if (*(byte *)(*plVar7 + 300) < bVar1) {
        plVar14 = (long *)0x0;
      }
      else {
        plVar14 = plVar7;
        if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)
             UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00000D6D_PostfixBurstDelegate_var
           ) {
          plVar14 = (long *)0x0;
        }
      }
      FUN_02145450(plVar7,plVar14 != (long *)0x0,0);
      uVar6 = FUN_0214546c(plVar7,0);
      if ((uVar6 & 1) != 0) {
        if (*param_1 == 0) goto LAB_021f2164;
        FUN_021485a4(*param_1,1,0);
      }
      plVar7[8] = param_7[7];
      plVar7[10] = param_7[8];
      lVar8 = param_7[0x14];
      plVar7[0x16] = param_7[0x15];
      plVar7[0x15] = lVar8;
      uVar6 = FUN_021f74b4(plVar7 + 0x15,0);
      if ((uVar6 & 1) == 0) {
        if (*param_1 == 0) goto LAB_021f2164;
        FUN_021484b4(*param_1,1,0);
      }
      uStack_138 = param_7[0x17];
      local_140 = param_7[0x16];
      uVar6 = FUN_021f74b4(&local_140,0);
      if ((uVar6 & 1) == 0) {
        lVar8 = param_7[0x16];
        plVar7[0x18] = param_7[0x17];
        plVar7[0x17] = lVar8;
      }
      uStack_138 = param_7[0x19];
      local_140 = param_7[0x18];
      uVar6 = FUN_021f74b4(&local_140,0);
      if ((uVar6 & 1) == 0) {
        lVar8 = param_7[0x18];
        plVar7[0x1a] = param_7[0x19];
        plVar7[0x19] = lVar8;
      }
      puVar2 = Method_UnityEngine_UIElements_MouseEventBase<MouseEnterWindowEvent>_Init__;
      uVar6 = FUN_02145494(plVar7,0);
      if ((uVar6 & 1) == 0) {
        uVar4 = *(undefined4 *)(param_7 + 0x11);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        *(undefined4 *)((long)plVar7 + 0x14) = uVar4;
        *(undefined4 *)(plVar7 + 3) = *(undefined4 *)((long)param_7 + 0x8c);
        iVar12 = *(int *)(param_7 + 0x12);
        if (iVar12 != 0) {
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          *(int *)((long)plVar7 + 0x1c) = iVar12;
        }
        if (*(int *)((long)param_7 + 0x94) != 0) {
          memcpy(auStack_3c0,param_7,0xd0);
          FUN_021f248c(plVar7,auStack_3c0);
        }
      }
      else {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        *(undefined4 *)((long)plVar7 + 0x1c) = 0xffffffff;
        *param_6 = 1;
      }
      puVar2 = 
      System_Collections_Generic_Dictionary<Type,_List<ValueTuple<MethodInfo,_DebugMember>>>_TypeInfo
      ;
      uVar6 = (ulong)param_7[10] >> 0x20;
      iVar12 = (int)((ulong)param_7[10] >> 0x20);
      if (0 < iVar12) {
        if (*param_1 == 0) goto LAB_021f2164;
        uVar3 = FUN_010b1ffc(*param_1 + 0x140,param_7[9],
                             *(undefined8 *)
                              System_Collections_Generic_Dictionary<Type,_List<ValueTuple<MethodInfo,_DebugMember>>>_TypeInfo
                            );
        *(int *)(plVar7 + 0x11) = iVar12;
        *(uint *)((long)plVar7 + 0x8c) = uVar3;
        if (*param_1 == 0) goto LAB_021f2164;
        uVar13 = (ulong)uVar3;
        FUN_010b3614(*param_1 + 0x148,iVar12,
                     *(undefined8 *)
                      Method_UnityEngine_Events_UnityEvent<HoverEnterEventArgs>_Invoke__);
        lVar8 = (ulong)uVar3 << 0x20;
        do {
          if ((*param_1 == 0) || (plVar14 = *(long **)(*param_1 + 0x148), plVar14 == (long *)0x0))
          goto LAB_021f2164;
          lVar9 = thunk_FUN_00d6225c(plVar7,*(undefined8 *)(*plVar14 + 0x40));
          if (lVar9 == 0) goto LAB_021f216c;
          if (*(uint *)(plVar14 + 3) <= uVar13) goto LAB_021f2168;
          lVar9 = lVar8 >> 0x1d;
          lVar8 = lVar8 + 0x100000000;
          uVar6 = uVar6 - 1;
          uVar13 = uVar13 + 1;
          *(long **)((long)plVar14 + lVar9 + 0x20) = plVar7;
        } while (uVar6 != 0);
      }
      iVar12 = *(int *)((long)param_7 + 100);
      if (0 < iVar12) {
        if (*param_1 == 0) goto LAB_021f2164;
        uVar4 = FUN_010b1ffc(*param_1 + 0x138,param_7[0xb],*(undefined8 *)puVar2);
        *(int *)(plVar7 + 0x12) = iVar12;
        *(undefined4 *)((long)plVar7 + 0x94) = uVar4;
      }
      if (0 < (int)((ulong)param_7[0xe] >> 0x20)) {
        local_220 = param_7[0xd];
        uStack_218 = param_7[0xe];
        FUN_011270b0(plVar7,&local_220,*(undefined8 *)Meta_WitAi_Json_JSONBinaryTag_TypeInfo);
      }
      if (0 < *(int *)((long)param_7 + 0x84)) {
        if (param_2 == 0) goto LAB_021f2164;
        uVar10 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ
                           (*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),0);
        FUN_021f2540(plVar7,param_7,uVar10);
      }
      return plVar7;
    }
  }
LAB_021f2164:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


