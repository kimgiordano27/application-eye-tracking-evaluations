/*
FUNCTION_NAME: FUN_061d6b40
ENTRY_POINT: 061d6b40
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 151
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void FUN_061d6b40(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long *param_5,long param_6)

{
  undefined *puVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int extraout_var;
  int extraout_var_00;
  long *plVar12;
  long *plVar13;
  undefined4 uVar14;
  long local_90;
  long lStack_88;
  long local_80;
  long local_70;
  long lStack_68;
  long local_60;
  
  if ((DAT_06dc6ea8 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fb930);
    FUN_02d965b8(Method_System_Collections_Generic_List<QDOODOQQDQODD>_Clear__);
    FUN_02d965b8(Method_System_Collections_Generic_List<QDOODOQQDQODD>__ctor__);
    FUN_02d965b8(Method_System_Collections_Generic_List<QDOODOQQDQODD>_Add__);
    FUN_02d965b8(Method_System_Collections_Generic_List<AssetDetails>__ctor__);
    FUN_02d965b8(Method_System_Collections_Generic_List<NativeSlice<Vertex>>_Clear__);
    FUN_02d965b8(Method_LTDescr_easeInCubic__);
    FUN_02d965b8(Method_LTDescr_easeInElastic__);
    DAT_06dc6ea8 = 1;
  }
  if (param_6 == 0) {
    return;
  }
  lVar6 = FUN_05d53428(param_5 + 0x16,0);
  lVar7 = FUN_05d53428(param_5 + 0x19,0);
  lVar8 = FUN_05d53428(param_5 + 0x1c,0);
  lVar9 = FUN_05d53428(param_5 + 0x1f,0);
  if (((char)param_5[0x49] == '\0') && (lVar6 != 0 || lVar7 != 0)) {
    lStack_68 = param_5[0x17];
    local_70 = param_5[0x16];
    local_60 = param_5[0x18];
    uVar10 = FUN_061d70ac(&local_70);
    if ((uVar10 & 1) == 0) {
      lStack_88 = param_5[0x1a];
      local_90 = param_5[0x19];
      local_80 = param_5[0x1b];
      uVar10 = FUN_061d70ac(&local_90);
      if ((uVar10 & 1) != 0) goto LAB_061d6c60;
    }
    else {
LAB_061d6c60:
      if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_0630c038(*(undefined8 *)Method_LTDescr_easeInElastic__,param_5,0);
    }
    *(undefined1 *)(param_5 + 0x49) = 1;
  }
  *(undefined1 *)(param_6 + 0x1c) = 0;
  *(undefined4 *)(param_6 + 0x18) = 0;
  if ((lVar8 == 0) || (FUN_05d417a8(lVar8,0), extraout_var < 1)) {
    if ((lVar9 == 0) ||
       ((lVar11 = FUN_05d41d28(lVar9,0), lVar11 == 0 ||
        (plVar12 = *(long **)(lVar11 + 0x78), plVar12 == (long *)0x0)))) {
LAB_061d6d2c:
      if ((lVar6 == 0) || (lVar11 = FUN_05d41d28(lVar6,0), lVar11 == 0)) {
        plVar12 = (long *)0x0;
      }
      else {
        plVar12 = *(long **)(lVar11 + 0x78);
      }
      puVar1 = Method_LTDescr_easeInCubic__;
      lVar11 = *(long *)Method_LTDescr_easeInCubic__;
      if (lVar7 == 0) {
        if (plVar12 == (long *)0x0) {
LAB_061d6da8:
          bVar2 = 0;
          goto LAB_061d6e58;
        }
        if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) !=
            lVar11)) goto LAB_061d6da8;
        plVar13 = (long *)0x0;
LAB_061d6dfc:
        if (plVar12[0x32] == 0) goto LAB_061d70a4;
        bVar2 = FUN_05d6f420(plVar12[0x32],0);
      }
      else {
        if (plVar12 != (long *)0x0) {
          if (*(byte *)(*plVar12 + 0x130) < *(byte *)(lVar11 + 0x130)) {
            plVar12 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8)
                   != lVar11) {
            plVar12 = (long *)0x0;
          }
        }
        lVar11 = FUN_05d41d28(lVar7,0);
        if ((lVar11 == 0) || (plVar13 = *(long **)(lVar11 + 0x78), plVar13 == (long *)0x0)) {
LAB_061d6df4:
          plVar13 = (long *)0x0;
        }
        else {
          bVar2 = *(byte *)(*(long *)puVar1 + 0x130);
          if (*(byte *)(*plVar13 + 0x130) < bVar2) goto LAB_061d6df4;
          if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar1) {
            plVar13 = (long *)0x0;
          }
        }
        if (plVar12 != (long *)0x0) goto LAB_061d6dfc;
        bVar2 = 0;
      }
      if (plVar12 != plVar13) {
        if (plVar13 == (long *)0x0) {
          bVar3 = 0;
        }
        else {
          if (plVar13[0x32] == 0) goto LAB_061d70a4;
          bVar3 = FUN_05d6f420(plVar13[0x32],0);
        }
        bVar2 = bVar2 & bVar3;
      }
      goto LAB_061d6e58;
    }
    bVar2 = *(byte *)(*(long *)Method_LTDescr_easeInCubic__ + 0x130);
    if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)Method_LTDescr_easeInCubic__)) goto LAB_061d6d2c;
    if (plVar12[0x32] == 0) goto LAB_061d70a4;
    bVar2 = FUN_05d6f420(plVar12[0x32],0);
    *(byte *)(param_6 + 0x1c) = bVar2 & 1;
Unity_XR_Oculus_NativeMethods_Internal__GetEyeTrackedFoveatedRenderingSupported:
    FUN_05d417a8(lVar9,0);
    if (0 < extraout_var_00) {
      uVar4 = FUN_03669ad8(lVar9,*(undefined8 *)
                                  Method_System_Collections_Generic_List<QDOODOQQDQODD>_Clear__);
      goto LAB_061d6ff8;
    }
  }
  else {
    bVar2 = (**(code **)(*param_5 + 0x268))(param_5,lVar8,*(undefined8 *)(*param_5 + 0x270));
LAB_061d6e58:
    *(byte *)(param_6 + 0x1c) = bVar2 & 1;
    if (lVar9 != 0)
    goto Unity_XR_Oculus_NativeMethods_Internal__GetEyeTrackedFoveatedRenderingSupported;
  }
  if (((lVar8 != 0) && (lVar8 = FUN_05d41d28(lVar8,0), lVar8 != 0)) &&
     (plVar12 = *(long **)(lVar8 + 0x78), plVar12 != (long *)0x0)) {
    bVar2 = *(byte *)(*(long *)Method_LTDescr_easeInCubic__ + 0x130);
    if ((bVar2 <= *(byte *)(*plVar12 + 0x130)) &&
       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) ==
        *(long *)Method_LTDescr_easeInCubic__)) {
      if (plVar12[0x31] == 0) goto LAB_061d70a4;
      uVar4 = FUN_03cbf208(plVar12[0x31],
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<AssetDetails>__ctor__);
      goto LAB_061d6ff8;
    }
  }
  if (((lVar6 == 0) || (lVar8 = FUN_05d41d28(lVar6,0), lVar8 == 0)) ||
     (plVar12 = *(long **)(lVar8 + 0x78), plVar12 == (long *)0x0)) {
LAB_061d6f24:
    plVar12 = (long *)0x0;
    if (lVar7 == 0) goto LAB_061d6f9c;
LAB_061d6f2c:
    lVar8 = FUN_05d41d28(lVar7,0);
    if ((lVar8 == 0) || (plVar13 = *(long **)(lVar8 + 0x78), plVar13 == (long *)0x0))
    goto LAB_061d6f9c;
    bVar2 = *(byte *)(*(long *)Method_LTDescr_easeInCubic__ + 0x130);
    if (*(byte *)(*plVar13 + 0x130) < bVar2) goto LAB_061d6f9c;
    if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)Method_LTDescr_easeInCubic__) {
      plVar13 = (long *)0x0;
    }
    if (plVar12 == (long *)0x0) goto LAB_061d6f7c;
LAB_061d6fa4:
    if (plVar12[0x31] == 0) goto LAB_061d70a4;
    uVar4 = FUN_03cbf208(plVar12[0x31],
                         *(undefined8 *)Method_System_Collections_Generic_List<AssetDetails>__ctor__
                        );
  }
  else {
    bVar2 = *(byte *)(*(long *)Method_LTDescr_easeInCubic__ + 0x130);
    if (*(byte *)(*plVar12 + 0x130) < bVar2) goto LAB_061d6f24;
    if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)Method_LTDescr_easeInCubic__) {
      plVar12 = (long *)0x0;
    }
    if (lVar7 != 0) goto LAB_061d6f2c;
LAB_061d6f9c:
    plVar13 = (long *)0x0;
    if (plVar12 != (long *)0x0) goto LAB_061d6fa4;
LAB_061d6f7c:
    uVar4 = 0;
  }
  if (plVar12 != plVar13) {
    if (plVar13 == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      if (plVar13[0x31] == 0) {
LAB_061d70a4:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar5 = FUN_03cbf208(plVar13[0x31],
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<AssetDetails>__ctor__);
      uVar5 = uVar5 & 2;
    }
    uVar4 = uVar5 | uVar4 & 1;
  }
LAB_061d6ff8:
  *(uint *)(param_6 + 0x18) = uVar4;
  if ((lVar6 != 0) && ((uVar4 & 1) != 0)) {
    uVar14 = FUN_03669e48(lVar6,*(undefined8 *)
                                 Method_System_Collections_Generic_List<QDOODOQQDQODD>_Add__);
    *(undefined4 *)(param_6 + 0x20) = uVar14;
    *(undefined4 *)(param_6 + 0x24) = param_2;
    *(undefined4 *)(param_6 + 0x28) = param_3;
  }
  if ((lVar7 != 0) && ((*(byte *)(param_6 + 0x18) >> 1 & 1) != 0)) {
    uVar14 = FUN_03669bb4(lVar7,*(undefined8 *)
                                 Method_System_Collections_Generic_List<QDOODOQQDQODD>__ctor__);
    *(undefined4 *)(param_6 + 0x2c) = uVar14;
    *(undefined4 *)(param_6 + 0x30) = param_2;
    *(undefined4 *)(param_6 + 0x34) = param_3;
    *(undefined4 *)(param_6 + 0x38) = param_4;
  }
  return;
}


