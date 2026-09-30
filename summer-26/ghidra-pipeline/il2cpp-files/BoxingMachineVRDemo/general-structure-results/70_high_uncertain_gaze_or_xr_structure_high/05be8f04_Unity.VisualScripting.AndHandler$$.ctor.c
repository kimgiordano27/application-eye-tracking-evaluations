/*
FUNCTION_NAME: Unity.VisualScripting.AndHandler$$.ctor
ENTRY_POINT: 05be8f04
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;ray_or_cast_sink_hits_14;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


undefined4 Unity_VisualScripting_AndHandler___ctor(void)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  void *__dest;
  int in_w8;
  long lVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  uint unaff_w25;
  undefined8 uVar26;
  long *unaff_x26;
  uint unaff_w27;
  uint *unaff_x29;
  undefined1 auVar27 [16];
  ulong in_stack_00000010;
  uint uStack0000000000000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  int iStack0000000000000040;
  undefined4 uStack0000000000000044;
  long *in_stack_00000048;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined4 in_stack_00000180;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  long in_stack_000001d0;
  uint uStack00000000000001d8;
  undefined1 uStack00000000000001dc;
  
code_r0x05be8f04:
  if (in_w8 == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar11 = FUN_05c4277c(0);
  if (lVar11 != 0) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar11 = FUN_05c4277c(0);
    if (lVar11 == 0) goto LAB_05bea9b0;
    if (0 < *(int *)(lVar11 + 0x18)) {
      lVar11 = *unaff_x22;
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar12 = FUN_05c4277c(0);
      uVar10 = *(undefined4 *)(unaff_x19 + 0x280);
      uVar2 = *(undefined4 *)(unaff_x19 + 0x238);
      if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__);
      }
      lVar11 = FUN_05c0a464(unaff_w27,lVar11,uVar12,1,uVar10,uVar2,(long)&stack0x000001d8 + 4,0);
      unaff_x26 = in_stack_00000048;
      uStack0000000000000018 = unaff_w27;
      if (lVar11 != 0) goto LAB_05be9000;
    }
  }
LAB_05be8fd0:
  lVar11 = FUN_05c2c458();
  uStack0000000000000018 = unaff_w27;
  if (lVar11 == 0) {
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w20) goto LAB_05bea9c8;
    FUN_05c2c9e8();
    if (*(int *)(*(long *)
                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    iVar7 = FUN_05c41df4(0);
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w20) goto LAB_05bea9c8;
    if (iVar7 == 0) {
      uStack0000000000000018 = 0x25a1;
    }
    else {
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uStack0000000000000018 = FUN_05c41df4(0);
    }
    *unaff_x29 = uStack0000000000000018;
    uVar12 = *(undefined8 *)(unaff_x19 + 0x100);
    uVar10 = *(undefined4 *)(unaff_x19 + 0x284);
    uVar2 = *(undefined4 *)(unaff_x19 + 0x23c);
    if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar11 = FUN_05c09ca0(uStack0000000000000018,uVar12,1,uVar10,uVar2,(long)&stack0x000001d8 + 4,0)
    ;
    if (lVar11 == 0) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      lVar11 = FUN_05c4236c(0);
      if (lVar11 != 0) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                    + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        lVar11 = FUN_05c4236c(0);
        if (lVar11 == 0) goto LAB_05bea9b0;
        if (0 < *(int *)(lVar11 + 0x18)) {
          lVar11 = *unaff_x22;
          if (*(int *)(*(long *)
                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                      + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar12 = FUN_05c4236c(0);
          uVar10 = *(undefined4 *)(unaff_x19 + 0x284);
          uVar2 = *(undefined4 *)(unaff_x19 + 0x23c);
          if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0)
          {
            thunk_FUN_02dbd7b4(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__);
          }
          lVar11 = FUN_05c0a248(uStack0000000000000018,lVar11,uVar12,1,uVar10,uVar2,
                                (long)&stack0x000001d8 + 4,0);
          if (lVar11 != 0) goto LAB_05be9df8;
        }
      }
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar12 = FUN_05c41f68(0);
      if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675e1b8);
      }
      uVar14 = FUN_0606a004(uVar12,0,0);
      if ((uVar14 & 1) != 0) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                    + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar12 = FUN_05c41f68(0);
        uVar10 = *(undefined4 *)(unaff_x19 + 0x284);
        uVar2 = *(undefined4 *)(unaff_x19 + 0x23c);
        if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__);
        }
        lVar11 = FUN_05c09ca0(uStack0000000000000018,uVar12,1,uVar10,uVar2,
                              (long)&stack0x000001d8 + 4,0);
        if (lVar11 != 0) goto LAB_05be9df8;
      }
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w20) goto LAB_05bea9c8;
      *unaff_x29 = 0x20;
      uVar12 = *(undefined8 *)(unaff_x19 + 0x100);
      uVar10 = *(undefined4 *)(unaff_x19 + 0x284);
      uVar2 = *(undefined4 *)(unaff_x19 + 0x23c);
      if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      lVar11 = FUN_05c09ca0(0x20,uVar12,1,uVar10,uVar2,(long)&stack0x000001d8 + 4,0);
      if (lVar11 == 0) {
        if (*(uint *)(unaff_x21 + 0x18) <= unaff_w20) goto LAB_05bea9c8;
        *unaff_x29 = 3;
        uVar12 = *(undefined8 *)(unaff_x19 + 0x100);
        uVar10 = *(undefined4 *)(unaff_x19 + 0x284);
        uVar2 = *(undefined4 *)(unaff_x19 + 0x23c);
        if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>__ctor__ + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uStack0000000000000018 = 3;
        lVar11 = FUN_05c09ca0(3,uVar12,1,uVar10,uVar2,(long)&stack0x000001d8 + 4,0);
      }
      else {
        uStack0000000000000018 = 0x20;
      }
    }
LAB_05be9df8:
    if (*(int *)(*(long *)
                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar14 = FUN_05c41f0c(0);
    unaff_x26 = in_stack_00000048;
    if ((uVar14 & 1) == 0) {
      plVar19 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_0675e2d0,4);
      if (unaff_w27 >> 0x10 == 0) {
        in_stack_000000f0 = CONCAT44(in_stack_000000f0._4_4_,unaff_w27);
        lVar18 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),&stack0x000000f0);
        if (plVar19 == (long *)0x0) goto LAB_05bea9b0;
        if ((lVar18 != 0) &&
           (lVar22 = thunk_FUN_02d9d438(lVar18,*(undefined8 *)(*plVar19 + 0x40)), lVar22 == 0))
        goto LAB_05bea9cc;
        if ((int)plVar19[3] == 0) goto LAB_05bea9c8;
        plVar19[4] = lVar18;
        thunk_FUN_02dd37b4(plVar19 + 4,lVar18);
        if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_05bea9b0;
        lVar18 = thunk_FUN_0606f5c0(*(long *)(unaff_x19 + 0xf8),0);
        if ((lVar18 != 0) &&
           (lVar22 = thunk_FUN_02d9d438(lVar18,*(undefined8 *)(*plVar19 + 0x40)), lVar22 == 0))
        goto LAB_05bea9cc;
        if (*(uint *)(plVar19 + 3) < 2) goto LAB_05bea9c8;
        plVar19[5] = lVar18;
        thunk_FUN_02dd37b4(plVar19 + 5,lVar18);
        if (lVar11 == 0) goto LAB_05bea9b0;
        in_stack_00000180 = *(undefined4 *)(lVar11 + 0x14);
        lVar18 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),&stack0x00000180);
        if ((lVar18 != 0) &&
           (lVar22 = thunk_FUN_02d9d438(lVar18,*(undefined8 *)(*plVar19 + 0x40)), lVar22 == 0))
        goto LAB_05bea9cc;
        if (*(uint *)(plVar19 + 3) < 3) goto LAB_05bea9c8;
        plVar19[6] = lVar18;
        thunk_FUN_02dd37b4(plVar19 + 6,lVar18);
        lVar18 = thunk_FUN_0606f5c0();
        if ((lVar18 != 0) &&
           (lVar22 = thunk_FUN_02d9d438(lVar18,*(undefined8 *)(*plVar19 + 0x40)), lVar22 == 0))
        goto LAB_05bea9cc;
        if (*(uint *)(plVar19 + 3) < 4) goto LAB_05bea9c8;
        plVar19[7] = lVar18;
        thunk_FUN_02dd37b4(plVar19 + 7,lVar18);
        puVar13 = (undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Quaternion>__ctor__;
      }
      else {
        in_stack_000000f0 = CONCAT44(in_stack_000000f0._4_4_,unaff_w27);
        lVar18 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),&stack0x000000f0);
        if (plVar19 == (long *)0x0) goto LAB_05bea9b0;
        if ((lVar18 != 0) &&
           (lVar22 = thunk_FUN_02d9d438(lVar18,*(undefined8 *)(*plVar19 + 0x40)), lVar22 == 0))
        goto LAB_05bea9cc;
        if ((int)plVar19[3] == 0) goto LAB_05bea9c8;
        plVar19[4] = lVar18;
        thunk_FUN_02dd37b4(plVar19 + 4,lVar18);
        if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_05bea9b0;
        lVar18 = thunk_FUN_0606f5c0(*(long *)(unaff_x19 + 0xf8),0);
        if ((lVar18 != 0) &&
           (lVar22 = thunk_FUN_02d9d438(lVar18,*(undefined8 *)(*plVar19 + 0x40)), lVar22 == 0))
        goto LAB_05bea9cc;
                    /* try { // try from 05bea010 to 05cea13f has its CatchHandler @ 05bea010
                       catch() { ... } // from try @ 05bea010 with catch @ 05bea010
                       catch() { ... } // from try @ 05bea6a8 with catch @ 05bea010
                       catch() { ... } // from try @ 05bea758 with catch @ 05bea010
                       catch() { ... } // from try @ 05bea844 with catch @ 05bea010 */
        if (*(uint *)(plVar19 + 3) < 2) goto LAB_05bea9c8;
        plVar19[5] = lVar18;
        thunk_FUN_02dd37b4(plVar19 + 5,lVar18);
        if (lVar11 == 0) goto LAB_05bea9b0;
        in_stack_00000180 = *(undefined4 *)(lVar11 + 0x14);
        lVar18 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x50),&stack0x00000180);
        if ((lVar18 != 0) &&
           (lVar22 = thunk_FUN_02d9d438(lVar18,*(undefined8 *)(*plVar19 + 0x40)), lVar22 == 0))
        goto LAB_05bea9cc;
        if (*(uint *)(plVar19 + 3) < 3) goto LAB_05bea9c8;
        plVar19[6] = lVar18;
        thunk_FUN_02dd37b4(plVar19 + 6,lVar18);
        lVar18 = thunk_FUN_0606f5c0();
        if ((lVar18 != 0) &&
           (lVar22 = thunk_FUN_02d9d438(lVar18,*(undefined8 *)(*plVar19 + 0x40)), lVar22 == 0))
        goto LAB_05bea9cc;
        if (*(uint *)(plVar19 + 3) < 4) goto LAB_05bea9c8;
        plVar19[7] = lVar18;
        thunk_FUN_02dd37b4(plVar19 + 7,lVar18);
        puVar13 = (undefined8 *)
                  Method_UnityEngine_XR_InputFeatureUsage<InputTrackingState>_get_name__;
      }
      uVar12 = FUN_04e8e72c(*puVar13,plVar19,0);
      if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_0602283c(uVar12);
    }
  }
LAB_05be9000:
  if ((*unaff_x26 == 0) || (lVar18 = *(long *)(*unaff_x26 + 0x38), lVar18 == 0)) goto LAB_05bea9b0;
  if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
  puVar13 = (undefined8 *)(lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38);
  *puVar13 = 0;
  thunk_FUN_02dd37b4(puVar13,0);
  if (lVar11 == 0) goto LAB_05bea9b0;
  if (*(char *)(lVar11 + 0x10) == '\x01') {
    if (*(long *)(lVar11 + 0x18) == 0) goto LAB_05bea9b0;
    iVar7 = FUN_05bf59d4(*(long *)(lVar11 + 0x18),0);
    if (*unaff_x22 == 0) goto LAB_05bea9b0;
    iVar8 = FUN_05bf59d4(*unaff_x22,0);
    if (iVar7 != iVar8) {
      plVar19 = *(long **)(lVar11 + 0x18);
      if (plVar19 == (long *)0x0) {
        *unaff_x22 = 0;
      }
      else {
        bVar3 = *(byte *)(*(long *)Method_UnityEngine_InputSystem_InputControl<float>_ReadValue__ +
                         0x130);
        if (*(byte *)(*plVar19 + 0x130) < bVar3) {
          plVar19 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar3 * 8 + -8) !=
                 *(long *)Method_UnityEngine_InputSystem_InputControl<float>_ReadValue__) {
          plVar19 = (long *)0x0;
        }
        *unaff_x22 = (long)plVar19;
      }
      thunk_FUN_02dd37b4();
    }
    bVar5 = iVar7 != iVar8;
    if ((unaff_w25 >> 4 == 0xfe0) || (unaff_w25 - 0xe0100 < 0xf0)) {
      if (*unaff_x22 == 0) goto LAB_05bea9b0;
      iVar7 = FUN_05c03084(*unaff_x22,uStack0000000000000018,unaff_w25,0);
      if (iVar7 != 0) {
        if (*unaff_x22 == 0) goto LAB_05bea9b0;
        uVar14 = FUN_05c05510(*unaff_x22,iVar7,&stack0x000001c8,0);
        if ((uVar14 & 1) != 0) {
          if ((*in_stack_00000048 == 0) ||
             (lVar18 = *(long *)(*in_stack_00000048 + 0x38), lVar18 == 0)) goto LAB_05bea9b0;
          if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
          *(undefined8 *)(lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38) =
               in_stack_000001c8;
          thunk_FUN_02dd37b4();
        }
      }
      if (*(uint *)(unaff_x21 + 0x18) <= in_stack_00000030._4_4_) goto LAB_05bea9c8;
      *(undefined4 *)(unaff_x21 + (long)(int)in_stack_00000030._4_4_ * 0x10 + 0x24) = 0x1a;
      unaff_w20 = in_stack_00000030._4_4_;
    }
    unaff_x26 = in_stack_00000048;
    if ((in_stack_00000010 & 0x100000000) == 0) goto LAB_05be9670;
    if (((*unaff_x22 == 0) || (lVar18 = *(long *)(*unaff_x22 + 0x178), lVar18 == 0)) ||
       (lVar18 = *(long *)(lVar18 + 0x38), lVar18 == 0)) goto LAB_05bea9b0;
    uVar14 = FUN_04937278(lVar18,*(undefined4 *)(lVar11 + 0x28),&stack0x000001d0,
                          *(undefined8 *)
                           Method_UnityEngine_InputSystem_InputControl<Vector2>_ReadValueFromStateWithCaching__
                         );
    if ((uVar14 & 1) != 0) {
      plVar24 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      plVar19 = (long *)Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__;
      if (in_stack_000001d0 == 0) {
LAB_05bea110:
        if (*(char *)(unaff_x19 + 0x42d) != '\0') {
          *(undefined1 *)(unaff_x19 + 0x42d) = 0;
          goto LAB_05bea11c;
        }
                    /* try { // try from 05bea140 to 05cea14f has its CatchHandler @ 05bea7a8 */
        lVar11 = *unaff_x26;
        if (lVar11 == 0) goto LAB_05bea9b0;
        *(int *)(lVar11 + 0x1c) = iStack0000000000000040;
        lVar18 = *plVar24;
        if (*(int *)(lVar18 + 0xe4) == 0) {
                    /* try { // try from 05bea15c to 05cea167 has its CatchHandler @ 05bea788 */
          thunk_FUN_02dbd7b4();
          lVar18 = *plVar24;
        }
        lVar18 = *(long *)(*(long *)(lVar18 + 0xb8) + 8);
        if (lVar18 == 0) goto LAB_05bea9b0;
        uVar9 = FUN_047c1490(lVar18,*(undefined8 *)
                                     Method_UnityEngine_InputSystem_InputControl<Quaternion>__ctor__
                            );
                    /* try { // try from 05bea180 to 05cea18b has its CatchHandler @ 05bea780 */
        *(uint *)(lVar11 + 0x34) = uVar9;
        if (*unaff_x26 == 0) goto LAB_05bea9b0;
        plVar25 = (long *)(*unaff_x26 + 0x60);
        lVar11 = *plVar25;
        if (lVar11 == 0) goto LAB_05bea9b0;
        uVar14 = (ulong)uVar9;
        if (*(int *)(lVar11 + 0x18) < (int)uVar9) {
          if (*(int *)(*plVar19 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_035631b4(plVar25,uVar14,0,
                       *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Hand>__ctor__);
        }
                    /* try { // try from 05bea1d4 to 05cea203 has its CatchHandler @ 05bea7b8 */
        if (*(long *)(unaff_x19 + 0x720) == 0) goto LAB_05bea9b0;
        plVar25 = (long *)(unaff_x19 + 0x720);
        if (*(int *)(*(long *)(unaff_x19 + 0x720) + 0x18) < (int)uVar9) {
          uVar6 = uVar9 | (int)uVar9 >> 0x10;
          uVar6 = uVar6 | (int)uVar6 >> 8;
          uVar6 = uVar6 | (int)uVar6 >> 4;
          uVar6 = uVar6 | (int)uVar6 >> 2;
          if (*(int *)(*plVar19 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_03562eb8(plVar25,(uVar6 | (int)uVar6 >> 1) + 1,
                       *(undefined8 *)
                        Method_UnityEngine_XR_InputFeatureUsage<InputTrackingState>__ctor__);
        }
        if (*(char *)(unaff_x19 + 0x359) != '\0') {
                    /* try { // try from 05bea234 to 05cea263 has its CatchHandler @ 05bea7b4 */
          if (*unaff_x26 == 0) goto LAB_05bea9b0;
          plVar23 = (long *)(*unaff_x26 + 0x38);
          lVar11 = *plVar23;
          if (lVar11 == 0) goto LAB_05bea9b0;
          iVar7 = *(int *)(unaff_x19 + 0x4a0);
          if (0x100 < *(int *)(lVar11 + 0x18) - iVar7) {
            iVar8 = 0x100;
            if (0x100 < iVar7 + 1) {
              iVar8 = iVar7 + 1;
            }
            if (*(int *)(*plVar19 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
                    /* try { // try from 05bea280 to 05cea283 has its CatchHandler @ 05bea768 */
            FUN_03563108(plVar23,iVar8,1,
                         *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Eyes>__ctor__);
                    /* try { // try from 05bea290 to 05cea317 has its CatchHandler @ 05bea7b0 */
            plVar24 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
          }
        }
        puVar4 = 
        Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_AppendWithCapacity__;
        if ((int)uVar9 < 1) goto LAB_05bea8e8;
        lVar11 = 0;
        uVar15 = 0;
        lVar18 = 0x54;
        lVar22 = 0x20;
        goto LAB_05bea2bc;
      }
      iVar7 = 0;
      while (iVar7 < *(int *)(in_stack_000001d0 + 0x18)) {
        auVar27 = FUN_03a7e878(in_stack_000001d0,iVar7,
                               *(undefined8 *)
                                Method_UnityEngine_InputSystem_InputControl<Vector3>_ReadValueFromStateWithCaching__
                              );
        lVar18 = auVar27._0_8_;
        if (lVar18 == 0) goto LAB_05bea9b0;
        uVar14 = *(ulong *)(lVar18 + 0x18);
        uVar9 = (uint)uVar14;
        if (1 < (int)uVar9) {
          uVar6 = 1;
          do {
            if (*(uint *)(unaff_x21 + 0x18) <= unaff_w20 + uVar6) goto LAB_05bea9c8;
            if (*unaff_x22 == 0) goto LAB_05bea9b0;
            iVar8 = FUN_05c02fa8(*unaff_x22,
                                 *(undefined4 *)
                                  (unaff_x21 + (long)(int)(unaff_w20 + uVar6) * 0x10 + 0x24),0);
            if (*(uint *)(lVar18 + 0x18) <= uVar6) goto LAB_05bea9c8;
            if (iVar8 != *(int *)(lVar18 + (long)(int)uVar6 * 4 + 0x20)) goto LAB_05be95b4;
            uVar6 = uVar6 + 1;
          } while (uVar9 != uVar6);
        }
        if (auVar27._8_4_ != 0) {
          if (*unaff_x22 == 0) goto LAB_05bea9b0;
          uVar15 = FUN_05c05510(*unaff_x22,auVar27._8_8_ & 0xffffffff,&stack0x000001c0,0);
          if ((uVar15 & 1) != 0) {
            if ((*in_stack_00000048 == 0) ||
               (lVar18 = *(long *)(*in_stack_00000048 + 0x38), lVar18 == 0)) goto LAB_05bea9b0;
            if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
            *(undefined8 *)(lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x38) =
                 in_stack_000001c0;
            thunk_FUN_02dd37b4();
            if ((int)uVar9 < 1) goto LAB_05be9668;
            uVar15 = 0;
            uVar6 = 0;
            if (unaff_w20 <= *(uint *)(unaff_x21 + 0x18)) {
              uVar6 = *(uint *)(unaff_x21 + 0x18) - unaff_w20;
            }
            goto LAB_05be9634;
          }
        }
LAB_05be95b4:
        iVar7 = iVar7 + 1;
        if (in_stack_000001d0 == 0) goto LAB_05bea9b0;
      }
    }
  }
  else {
    bVar5 = false;
  }
  goto LAB_05be9670;
  while( true ) {
    lVar18 = unaff_x21 + (long)(int)(unaff_w20 + (int)uVar15) * 0x10;
    if (uVar15 == 0) {
      *(uint *)(lVar18 + 0x2c) = uVar9;
    }
    else {
      *(undefined4 *)(lVar18 + 0x24) = 0x1a;
    }
    uVar15 = uVar15 + 1;
    if ((uVar14 & 0xffffffff) == uVar15) break;
LAB_05be9634:
    if (uVar6 == uVar15) goto LAB_05bea9c8;
  }
LAB_05be9668:
  unaff_w20 = (unaff_w20 + uVar9) - 1;
LAB_05be9670:
  if ((*unaff_x26 == 0) || (lVar18 = *(long *)(*unaff_x26 + 0x38), lVar18 == 0)) goto LAB_05bea9b0;
  if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
  lVar18 = lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178;
  plVar19 = (long *)(lVar18 + 0x30);
  *plVar19 = lVar11;
  *(undefined4 *)(lVar18 + 0x20) = 0;
  thunk_FUN_02dd37b4(plVar19,lVar11);
  if ((*unaff_x26 == 0) || (lVar18 = *(long *)(*unaff_x26 + 0x38), lVar18 == 0)) goto LAB_05bea9b0;
  uVar9 = *(uint *)(unaff_x19 + 0x4a0);
  if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_05bea9c8;
  lVar22 = lVar18 + (long)(int)uVar9 * 0x178;
  *(short *)(lVar22 + 0x24) = (short)uStack0000000000000018;
  *(undefined1 *)(lVar22 + 0x54) = uStack00000000000001dc;
  if (*(uint *)(unaff_x21 + 0x18) <= unaff_w20) goto LAB_05bea9c8;
  lVar18 = lVar18 + (long)(int)uVar9 * 0x178;
  *(undefined8 *)(lVar18 + 0x28) = *(undefined8 *)(unaff_x21 + (long)(int)unaff_w20 * 0x10 + 0x28);
  *(long *)(lVar18 + 0x40) = *unaff_x22;
  thunk_FUN_02dd37b4();
  plVar24 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  plVar19 = (long *)Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__;
  if (*(char *)(lVar11 + 0x10) == '\x02') {
    plVar25 = *(long **)(lVar11 + 0x18);
    if (plVar25 == (long *)0x0) goto LAB_05bea9b0;
    bVar3 = *(byte *)(*(long *)
                       Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_RemoveAtByMovingTailWithCapacity__
                     + 0x130);
    if ((*(byte *)(*plVar25 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar25 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)
         Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_RemoveAtByMovingTailWithCapacity__
       )) goto LAB_05bea9b0;
    lVar18 = plVar25[0x11];
    lVar11 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar11 = *plVar24;
    }
    uVar9 = FUN_05be3d0c(lVar18,plVar25,*(long *)(lVar11 + 0xb8),
                         *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8));
    *(uint *)(unaff_x19 + 0x120) = uVar9;
    lVar11 = **(long **)(*plVar24 + 0xb8);
    if (lVar11 == 0) goto LAB_05bea9b0;
    if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_05bea9c8;
    lVar11 = lVar11 + (long)(int)uVar9 * 0x38;
    *(int *)(lVar11 + 0x54) = *(int *)(lVar11 + 0x54) + 1;
    if ((*unaff_x26 == 0) || (lVar11 = *(long *)(*unaff_x26 + 0x38), lVar11 == 0))
    goto LAB_05bea9b0;
    uVar9 = *(uint *)(unaff_x19 + 0x4a0);
    if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_05bea9c8;
    lVar11 = lVar11 + (long)(int)uVar9 * 0x178;
    *(undefined4 *)(lVar11 + 0x20) = 1;
    *(undefined4 *)(lVar11 + 0x50) = *(undefined4 *)(unaff_x19 + 0x120);
    *(undefined4 *)(unaff_x19 + 0x65c) = 0;
    *(undefined4 *)(unaff_x19 + 0x120) = uStack0000000000000044;
    iStack0000000000000040 = iStack0000000000000040 + 1;
    goto LAB_05be9d74;
  }
  if (bVar5) {
    if (*unaff_x22 == 0) goto LAB_05bea9b0;
    iVar7 = FUN_05bf59d4(*unaff_x22,0);
    if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_05bea9b0;
    iVar8 = FUN_05bf59d4(*(long *)(unaff_x19 + 0xf8),0);
    if (iVar7 != iVar8) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                  + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar14 = FUN_05c4242c(0);
      if ((uVar14 & 1) == 0) {
        if (*unaff_x22 == 0) goto LAB_05bea9b0;
        uVar12 = *(undefined8 *)(*unaff_x22 + 0x88);
      }
      else {
        if (*unaff_x22 == 0) goto LAB_05bea9b0;
        uVar26 = *(undefined8 *)(*unaff_x22 + 0x88);
        uVar12 = *in_stack_00000038;
        if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>_get_name__ + 0xe4) == 0)
        {
          thunk_FUN_02dbd7b4();
        }
        uVar12 = FUN_05c3d38c(uVar12,uVar26,0);
      }
      *in_stack_00000038 = uVar12;
      thunk_FUN_02dd37b4(in_stack_00000038);
      puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      uVar12 = *in_stack_00000038;
      lVar22 = *unaff_x22;
      lVar18 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      if (*(int *)(lVar18 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar18 = *(long *)puVar4;
      }
      uVar10 = FUN_05be3ad4(uVar12,lVar22,*(long *)(lVar18 + 0xb8),
                            *(undefined8 *)(*(long *)(lVar18 + 0xb8) + 8));
      *(undefined4 *)(unaff_x19 + 0x120) = uVar10;
      unaff_x26 = in_stack_00000048;
    }
  }
  if (*(long *)(lVar11 + 0x20) == 0) goto LAB_05bea9b0;
  iVar7 = FUN_06114b10(*(long *)(lVar11 + 0x20),0);
  if (0 < iVar7) {
    if (*(long *)(lVar11 + 0x20) == 0) goto LAB_05bea9b0;
    lVar18 = *unaff_x22;
    uVar12 = *in_stack_00000038;
    uVar10 = FUN_06114b10(*(long *)(lVar11 + 0x20),0);
    if (*(int *)(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>_get_name__ + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)Method_UnityEngine_XR_InputFeatureUsage<bool>_get_name__);
    }
    uVar12 = FUN_05c3ce0c(lVar18,uVar12,uVar10,0);
    *in_stack_00000038 = uVar12;
    thunk_FUN_02dd37b4(in_stack_00000038,uVar12);
    puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    uVar12 = *in_stack_00000038;
    lVar18 = *unaff_x22;
    lVar11 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar11 = *(long *)puVar4;
    }
    uVar10 = FUN_05be3ad4(uVar12,lVar18,*(long *)(lVar11 + 0xb8),
                          *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8));
    bVar5 = true;
    *(undefined4 *)(unaff_x19 + 0x120) = uVar10;
    unaff_x26 = in_stack_00000048;
  }
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar14 = FUN_04f80ed4(uStack0000000000000018,0);
  puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  plVar19 = (long *)Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__;
  if ((uStack0000000000000018 != 0x200b) && ((uVar14 & 1) == 0)) {
    lVar11 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar11 = *(long *)puVar4;
    }
    lVar18 = **(long **)(lVar11 + 0xb8);
    if (lVar18 == 0) goto LAB_05bea9b0;
    uVar9 = *(uint *)(unaff_x19 + 0x120);
    if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_05bea9c8;
    if (*(int *)(lVar18 + (long)(int)uVar9 * 0x38 + 0x54) < 0x3fff) {
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar18 = **(long **)(*(long *)
                              Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__ +
                            0xb8);
        if (lVar18 == 0) goto LAB_05bea9b0;
        uVar9 = *(uint *)(unaff_x19 + 0x120);
      }
    }
    else {
      if (bVar5) {
        if (*(long *)(unaff_x19 + 0x780) == 0) goto LAB_05bea9b0;
        uVar14 = FUN_047c3154(*(long *)(unaff_x19 + 0x780),uVar9,(long)&stack0x000001b8 + 4,
                              *(undefined8 *)PTR_DAT_0678dea8);
        puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        if ((uVar14 & 1) == 0) {
LAB_05be9ad4:
          uVar26 = *in_stack_00000038;
          uVar12 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067616a0);
          FUN_060369d4(uVar12,uVar26,0);
          puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
          lVar18 = *unaff_x22;
          lVar11 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar11 = *(long *)puVar4;
          }
          uVar9 = FUN_05be3ad4(uVar12,lVar18,*(long *)(lVar11 + 0xb8),
                               *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8));
          if (*(long *)(unaff_x19 + 0x780) == 0) goto LAB_05bea9b0;
          FUN_047c17c8(*(long *)(unaff_x19 + 0x780),*(undefined4 *)(unaff_x19 + 0x120),uVar9,
                       *(undefined8 *)PTR_DAT_06768b20);
          lVar11 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        }
        else {
          lVar11 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar11 = *(long *)puVar4;
          }
          lVar18 = **(long **)(lVar11 + 0xb8);
          if (lVar18 == 0) goto LAB_05bea9b0;
          if (*(uint *)(lVar18 + 0x18) <= in_stack_000001b8._4_4_) goto LAB_05bea9c8;
          uVar9 = in_stack_000001b8._4_4_;
          if (0x3ffe < *(int *)(lVar18 + (long)(int)in_stack_000001b8._4_4_ * 0x38 + 0x54))
          goto LAB_05be9ad4;
        }
        *(uint *)(unaff_x19 + 0x120) = uVar9;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          uVar9 = *(uint *)(unaff_x19 + 0x120);
          lVar11 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        }
        lVar18 = **(long **)(lVar11 + 0xb8);
      }
      else {
        uVar26 = *in_stack_00000038;
        uVar12 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067616a0);
        FUN_060369d4(uVar12,uVar26,0);
        puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        lVar18 = *unaff_x22;
        lVar11 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar11 = *(long *)puVar4;
        }
        uVar9 = FUN_05be3ad4(uVar12,lVar18,*(long *)(lVar11 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8));
        *(uint *)(unaff_x19 + 0x120) = uVar9;
        lVar18 = **(long **)(*(long *)puVar4 + 0xb8);
      }
      if (lVar18 == 0) goto LAB_05bea9b0;
    }
    if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_05bea9c8;
    lVar18 = lVar18 + (long)(int)uVar9 * 0x38;
    *(int *)(lVar18 + 0x54) = *(int *)(lVar18 + 0x54) + 1;
  }
  plVar24 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  if ((*unaff_x26 == 0) || (lVar11 = *(long *)(*unaff_x26 + 0x38), lVar11 == 0)) goto LAB_05bea9b0;
  if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
  *(undefined8 *)(lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x48) =
       *in_stack_00000038;
  thunk_FUN_02dd37b4();
  if ((*unaff_x26 == 0) || (lVar11 = *(long *)(*unaff_x26 + 0x38), lVar11 == 0)) goto LAB_05bea9b0;
  if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
  uVar9 = *(uint *)(unaff_x19 + 0x120);
  *(uint *)(lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178 + 0x50) = uVar9;
  lVar11 = *plVar24;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar11 = *plVar24;
    uVar9 = *(uint *)(unaff_x19 + 0x120);
  }
  lVar18 = **(long **)(lVar11 + 0xb8);
  if (lVar18 == 0) goto LAB_05bea9b0;
  if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_05bea9c8;
  *(bool *)(lVar18 + (long)(int)uVar9 * 0x38 + 0x41) = bVar5;
  if (bVar5) {
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar18 = **(long **)(*plVar24 + 0xb8);
      if (lVar18 == 0) goto LAB_05bea9b0;
      uVar9 = *(uint *)(unaff_x19 + 0x120);
    }
    if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_05bea9c8;
    puVar13 = (undefined8 *)(lVar18 + (long)(int)uVar9 * 0x38 + 0x48);
    *puVar13 = in_stack_00000028;
    thunk_FUN_02dd37b4(puVar13,in_stack_00000028);
    *(undefined8 *)(unaff_x19 + 0x100) = in_stack_00000020;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(unaff_x19 + 0x118) = in_stack_00000028;
    thunk_FUN_02dd37b4(in_stack_00000038,in_stack_00000028);
    *(undefined4 *)(unaff_x19 + 0x120) = uStack0000000000000044;
  }
  uVar9 = *(uint *)(unaff_x19 + 0x4a0);
LAB_05be9d74:
  do {
    *(uint *)(unaff_x19 + 0x4a0) = uVar9 + 1;
    in_stack_00000030._4_4_ = unaff_w20;
    do {
      uVar6 = *(uint *)(unaff_x21 + 0x18);
      uVar9 = in_stack_00000030._4_4_ + 1;
      if ((int)uVar6 <= (int)uVar9) goto LAB_05bea110;
      if (uVar6 <= uVar9) goto LAB_05bea9c8;
      unaff_x29 = (uint *)(unaff_x21 + (long)(int)uVar9 * 0x10 + 0x24);
      if (*unaff_x29 == 0) goto LAB_05bea110;
      if (*unaff_x26 == 0) goto LAB_05bea9b0;
      plVar24 = (long *)(*unaff_x26 + 0x38);
      lVar11 = *plVar24;
      iVar7 = *(int *)(unaff_x19 + 0x4a0);
      if ((lVar11 == 0) || (*(int *)(lVar11 + 0x18) <= iVar7)) {
        if (*(int *)(*plVar19 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_03563108(plVar24,iVar7 + 1,1,
                     *(undefined8 *)Method_UnityEngine_XR_InputFeatureUsage<Eyes>__ctor__);
        uVar6 = *(uint *)(unaff_x21 + 0x18);
      }
      if (uVar6 <= uVar9) goto LAB_05bea9c8;
      unaff_w27 = *unaff_x29;
      if ((unaff_w27 != 0x3c) || (*(char *)(unaff_x19 + 0x33a) == '\0')) {
LAB_05be8d80:
        uStack00000000000001dc = 0;
        in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0x100);
        in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x118);
        uStack0000000000000044 = *(undefined4 *)(unaff_x19 + 0x120);
        if (*(int *)(unaff_x19 + 0x65c) != 0) goto LAB_05be8e54;
        uVar6 = *(uint *)(unaff_x19 + 0x284);
        if ((uVar6 >> 4 & 1) == 0) {
          if ((uVar6 >> 3 & 1) == 0) {
            if ((uVar6 >> 5 & 1) != 0) goto LAB_05be8da8;
          }
          else {
            if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar14 = FUN_04f83744(unaff_w27,0);
            if ((uVar14 & 1) != 0) {
              if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar6 = FUN_04f83be8(unaff_w27,0);
              goto LAB_05be8e50;
            }
          }
        }
        else {
LAB_05be8da8:
          if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar14 = FUN_04f837e4(unaff_w27,0);
          if ((uVar14 & 1) != 0) {
            if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar6 = FUN_04f83a70(unaff_w27,0);
LAB_05be8e50:
            unaff_w27 = uVar6 & 0xffff;
          }
        }
LAB_05be8e54:
        in_stack_00000030._4_4_ = in_stack_00000030._4_4_ + 2;
        if ((int)in_stack_00000030._4_4_ < (int)*(uint *)(unaff_x21 + 0x18)) {
          if (*(uint *)(unaff_x21 + 0x18) <= in_stack_00000030._4_4_) goto LAB_05bea9c8;
          unaff_w25 = *(uint *)(unaff_x21 + (long)(int)in_stack_00000030._4_4_ * 0x10 + 0x24);
        }
        else {
          unaff_w25 = 0;
        }
        unaff_w20 = uVar9;
        if (*(char *)(unaff_x19 + 0x33b) == '\0') goto LAB_05be8fd0;
        if (*(int *)(*(long *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_Append__
                    + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar14 = FUN_05c4c7a8(unaff_w27,0);
        if ((unaff_w25 == 0xfe0e) || ((uVar14 & 1) == 0)) {
          if (*(int *)(*(long *)
                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_Append__
                      + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar14 = FUN_05c4c728(unaff_w27,0);
          if ((unaff_w25 != 0xfe0f) || ((uVar14 & 1) == 0)) goto LAB_05be8fd0;
        }
        in_w8 = *(int *)(*(long *)
                          Method_UnityEngine_InputSystem_Utilities_InlinedArray<TrackedDeviceRaycaster>_AppendWithCapacity__
                        + 0xe4);
        goto code_r0x05be8f04;
      }
      uVar10 = *(undefined4 *)(unaff_x19 + 0x120);
      uVar14 = FUN_05c217f4();
      unaff_w20 = uStack00000000000001d8;
      if ((uVar14 & 1) == 0) goto LAB_05be8d80;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar9) goto LAB_05bea9c8;
      iVar7 = *(int *)(unaff_x21 + (long)(int)uVar9 * 0x10 + 0x28);
      if ((*(byte *)(unaff_x19 + 0x284) & 1) != 0) {
        *(undefined1 *)(unaff_x19 + 0x292) = 1;
      }
      puVar4 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      plVar24 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      in_stack_00000030._4_4_ = uStack00000000000001d8;
    } while (*(int *)(unaff_x19 + 0x65c) != 1);
    lVar11 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar11 = *(long *)puVar4;
    }
    lVar11 = **(long **)(lVar11 + 0xb8);
    if (lVar11 == 0) goto LAB_05bea9b0;
    if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x120)) goto LAB_05bea9c8;
    lVar11 = lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
    *(int *)(lVar11 + 0x54) = *(int *)(lVar11 + 0x54) + 1;
    if ((*unaff_x26 == 0) || (lVar11 = *(long *)(*unaff_x26 + 0x38), lVar11 == 0))
    goto LAB_05bea9b0;
    if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x4a0)) goto LAB_05bea9c8;
    lVar11 = lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x4a0) * 0x178;
    *(short *)(lVar11 + 0x24) = *(short *)(unaff_x19 + 0x6bc) + -0x2000;
    *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)(unaff_x19 + 0x100);
    thunk_FUN_02dd37b4();
    if ((*(long *)(unaff_x19 + 0x3a0) == 0) ||
       (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x3a0) + 0x38), lVar11 == 0)) goto LAB_05bea9b0;
    uVar9 = *(uint *)(unaff_x19 + 0x4a0);
    if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_05bea9c8;
    *(undefined4 *)(lVar11 + (long)(int)uVar9 * 0x178 + 0x50) = *(undefined4 *)(unaff_x19 + 0x120);
    if ((*(long *)(unaff_x19 + 0x6b0) == 0) ||
       (lVar18 = FUN_05c45ed8(*(long *)(unaff_x19 + 0x6b0),0), lVar18 == 0)) goto LAB_05bea9b0;
    uVar12 = FUN_03aac1c4(lVar18,*(undefined4 *)(unaff_x19 + 0x6bc),
                          *(undefined8 *)
                           Method_UnityEngine_InputSystem_InputControl<Vector3>_ReadUnprocessedValueFromStateWithCaching__
                         );
    if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_05bea9c8;
    *(undefined8 *)(lVar11 + (long)(int)uVar9 * 0x178 + 0x30) = uVar12;
    thunk_FUN_02dd37b4();
    if ((*in_stack_00000048 == 0) || (lVar11 = *(long *)(*in_stack_00000048 + 0x38), lVar11 == 0))
    goto LAB_05bea9b0;
    uVar9 = *(uint *)(unaff_x19 + 0x4a0);
    if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_05bea9c8;
    uVar2 = *(undefined4 *)(unaff_x19 + 0x65c);
    lVar18 = lVar11 + (long)(int)uVar9 * 0x178;
    *(int *)(lVar18 + 0x28) = iVar7;
    *(undefined4 *)(lVar18 + 0x20) = uVar2;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w20) goto LAB_05bea9c8;
    *(int *)(lVar11 + (long)(int)uVar9 * 0x178 + 0x2c) =
         (*(int *)(unaff_x21 + (long)(int)unaff_w20 * 0x10 + 0x28) - iVar7) + 1;
    *(undefined4 *)(unaff_x19 + 0x65c) = 0;
    *(undefined4 *)(unaff_x19 + 0x120) = uVar10;
    iStack0000000000000040 = iStack0000000000000040 + 1;
    plVar24 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    unaff_x26 = in_stack_00000048;
  } while( true );
LAB_05bea2bc:
  do {
    if (uVar15 != 0) {
      lVar20 = *plVar25;
      if (lVar20 == 0) goto LAB_05bea9b0;
      if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_05bea9c8;
      uVar12 = *(undefined8 *)(lVar20 + uVar15 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar16 = UnityEngine_Font__add_textureRebuilt(uVar12,0,0);
      if ((uVar16 & 1) != 0) {
        lVar20 = *plVar24;
        plVar19 = (long *)*plVar25;
        if (*(int *)(lVar20 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar20 = *plVar24;
        }
        lVar20 = **(long **)(lVar20 + 0xb8);
        if (lVar20 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_05bea9c8;
        lVar20 = lVar20 + lVar18;
        in_stack_00000170 = *(undefined8 *)(lVar20 + -4);
        in_stack_00000168 = *(undefined8 *)(lVar20 + -0xc);
        in_stack_00000160 = *(undefined8 *)(lVar20 + -0x14);
        in_stack_00000158 = *(undefined8 *)(lVar20 + -0x1c);
        in_stack_00000150 = *(undefined8 *)(lVar20 + -0x24);
        in_stack_00000148 = *(undefined8 *)(lVar20 + -0x2c);
        in_stack_00000140 = *(undefined8 *)(lVar20 + -0x34);
                    /* try { // try from 05bea364 to 05cea393 has its CatchHandler @ 05bea79c */
        lVar20 = FUN_05c48f74();
        if (plVar19 == (long *)0x0) goto LAB_05bea9b0;
        if ((lVar20 != 0) &&
           (lVar17 = thunk_FUN_02d9d438(lVar20,*(undefined8 *)(*plVar19 + 0x40)), lVar17 == 0)) {
LAB_05bea9cc:
          uVar12 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar12,0);
        }
        if (*(uint *)(plVar19 + 3) <= uVar15) goto LAB_05bea9c8;
        plVar19[uVar15 + 4] = lVar20;
        thunk_FUN_02dd37b4((long)plVar19 + lVar22,lVar20);
        plVar24 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
        if ((*in_stack_00000048 == 0) ||
           (lVar20 = *(long *)(*in_stack_00000048 + 0x60), lVar20 == 0)) goto LAB_05bea9b0;
                    /* try { // try from 05bea3d0 to 05cea403 has its CatchHandler @ 05bea798 */
        if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_05bea9c8;
        puVar13 = (undefined8 *)(lVar20 + lVar11 + 0x30);
        *puVar13 = 0;
        thunk_FUN_02dd37b4(puVar13,0);
      }
      lVar20 = *plVar25;
      if (lVar20 == 0) goto LAB_05bea9b0;
      if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_05bea9c8;
      lVar20 = *(long *)(lVar20 + uVar15 * 8 + 0x20);
      if (lVar20 == 0) goto LAB_05bea9b0;
      uVar12 = *(undefined8 *)(lVar20 + 0x38);
                    /* try { // try from 05bea418 to 05cea41b has its CatchHandler @ 05bea764 */
      if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
                    /* try { // try from 05bea424 to 05cea49f has its CatchHandler @ 05bea7ac */
      uVar16 = UnityEngine_Font__add_textureRebuilt(uVar12,0,0);
      if ((uVar16 & 1) == 0) {
        lVar20 = *plVar25;
        if (lVar20 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_05bea9c8;
        lVar20 = *(long *)(lVar20 + uVar15 * 8 + 0x20);
        if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x38), lVar20 == 0)) goto LAB_05bea9b0;
        iVar7 = FUN_0606f30c(lVar20,0);
        lVar20 = *plVar24;
        if (*(int *)(lVar20 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(lVar20);
          lVar20 = *plVar24;
        }
        lVar20 = **(long **)(lVar20 + 0xb8);
        if (lVar20 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_05bea9c8;
        lVar20 = *(long *)(lVar20 + lVar18 + -0x1c);
        if (lVar20 == 0) goto LAB_05bea9b0;
        iVar8 = FUN_0606f30c(lVar20,0);
        if (iVar7 != iVar8) goto LAB_05bea4b4;
      }
      else {
LAB_05bea4b4:
        lVar20 = *plVar25;
        if (lVar20 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_05bea9c8;
        lVar17 = *plVar24;
        lVar20 = *(long *)(lVar20 + uVar15 * 8 + 0x20);
        if (*(int *)(lVar17 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar17 = *plVar24;
        }
        lVar17 = **(long **)(lVar17 + 0xb8);
                    /* try { // try from 05bea4ec to 05cea51b has its CatchHandler @ 05bea794 */
        if (lVar17 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar17 + 0x18) <= uVar15) goto LAB_05bea9c8;
        if (lVar20 == 0) goto LAB_05bea9b0;
        thunk_FUN_05c48a90(lVar20,*(undefined8 *)(lVar17 + lVar18 + -0x1c),0);
        lVar20 = *plVar25;
        if (lVar20 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_05bea9c8;
                    /* try { // try from 05bea530 to 05cea533 has its CatchHandler @ 05bea758 */
        lVar17 = **(long **)(*plVar24 + 0xb8);
        if (lVar17 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar17 + 0x18) <= uVar15) goto LAB_05bea9c8;
        lVar20 = *(long *)(lVar20 + uVar15 * 8 + 0x20);
        if (lVar20 == 0) goto LAB_05bea9b0;
        *(undefined8 *)(lVar20 + 0x20) = *(undefined8 *)(lVar17 + lVar18 + -0x2c);
        thunk_FUN_02dd37b4();
        lVar20 = *plVar25;
        if (lVar20 == 0) goto LAB_05bea9b0;
                    /* try { // try from 05bea570 to 05cea5a3 has its CatchHandler @ 05bea790 */
        if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_05bea9c8;
        lVar17 = **(long **)(*plVar24 + 0xb8);
        if (lVar17 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar17 + 0x18) <= uVar15) goto LAB_05bea9c8;
        lVar20 = *(long *)(lVar20 + uVar15 * 8 + 0x20);
        if (lVar20 == 0) goto LAB_05bea9b0;
        *(undefined8 *)(lVar20 + 0x28) = *(undefined8 *)(lVar17 + lVar18 + -0x24);
        thunk_FUN_02dd37b4();
      }
      lVar20 = *plVar24;
      if (*(int *)(lVar20 + 0xe4) == 0) {
                    /* try { // try from 05bea5b8 to 05cea5bf has its CatchHandler @ 05bea760 */
        thunk_FUN_02dbd7b4();
        lVar20 = *plVar24;
      }
      lVar17 = **(long **)(lVar20 + 0xb8);
      if (lVar17 == 0) goto LAB_05bea9b0;
      if (*(uint *)(lVar17 + 0x18) <= uVar15) goto LAB_05bea9c8;
                    /* try { // try from 05bea5d8 to 05cea5df has its CatchHandler @ 05bea7bc */
      if (*(char *)(lVar17 + lVar18 + -0x13) != '\0') {
        lVar21 = *plVar25;
        if (lVar21 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar21 + 0x18) <= uVar15) goto LAB_05bea9c8;
                    /* try { // try from 05bea5f8 to 05cea617 has its CatchHandler @ 05bea78c */
        lVar21 = *(long *)(lVar21 + uVar15 * 8 + 0x20);
        if (*(int *)(lVar20 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar17 = **(long **)(*plVar24 + 0xb8);
          if (lVar17 == 0) goto LAB_05bea9b0;
        }
                    /* try { // try from 05bea624 to 05cea62b has its CatchHandler @ 05bea75c */
        if (*(uint *)(lVar17 + 0x18) <= uVar15) goto LAB_05bea9c8;
        if (lVar21 == 0) goto LAB_05bea9b0;
        FUN_05c48ac0(lVar21,*(undefined8 *)(lVar17 + lVar18 + -0x1c),0);
        lVar20 = *plVar25;
        if (lVar20 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_05bea9c8;
        lVar17 = **(long **)(*plVar24 + 0xb8);
        if (lVar17 == 0) goto LAB_05bea9b0;
                    /* try { // try from 05bea66c to 05cea6a7 has its CatchHandler @ 05bea7bc */
        if (*(uint *)(lVar17 + 0x18) <= uVar15) goto LAB_05bea9c8;
        lVar20 = *(long *)(lVar20 + uVar15 * 8 + 0x20);
        if (lVar20 == 0) goto LAB_05bea9b0;
        *(undefined8 *)(lVar20 + 0x48) = *(undefined8 *)(lVar17 + lVar18 + -0xc);
        thunk_FUN_02dd37b4();
      }
    }
    lVar20 = *plVar24;
    if (*(int *)(lVar20 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar20 = *plVar24;
    }
    lVar20 = **(long **)(lVar20 + 0xb8);
                    /* try { // try from 05bea6a8 to 05cea733 has its CatchHandler @ 05bea010 */
    if (lVar20 == 0) goto LAB_05bea9b0;
    if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_05bea9c8;
    if ((*in_stack_00000048 == 0) || (lVar17 = *(long *)(*in_stack_00000048 + 0x60), lVar17 == 0))
    goto LAB_05bea9b0;
    if (*(uint *)(lVar17 + 0x18) <= uVar15) goto LAB_05bea9c8;
    lVar21 = *(long *)(lVar17 + lVar11 + 0x30);
    uVar6 = *(uint *)(lVar20 + lVar18);
    if (lVar21 == 0) {
      if (uVar15 == 0) {
                    /* try { // try from 05bea7d4 to 05cea7d7 has its CatchHandler @ 05bea7e4 */
                    /* catch() { ... } // from try @ 05bea7d4 with catch @ 05bea7e4 */
        in_stack_00000128 = 0;
        in_stack_00000120 = 0;
        in_stack_00000138 = 0;
        in_stack_00000130 = 0;
        in_stack_00000108 = 0;
        in_stack_00000100 = 0;
        in_stack_00000118 = 0;
        in_stack_00000110 = 0;
        in_stack_000000f8 = 0;
        in_stack_000000f0 = 0;
        FUN_05c3debc(&stack0x000000f0,*(undefined8 *)(unaff_x19 + 0x3d8),uVar6 + 1,0);
        memcpy(&stack0x000000a0,&stack0x000000f0,0x50);
        if (*(int *)(lVar17 + 0x18) == 0) goto LAB_05bea9c8;
                    /* try { // try from 05bea81c to 05cea843 has its CatchHandler @ 05bea858 */
        memcpy((void *)(lVar17 + lVar11 + 0x20),&stack0x000000a0,0x50);
        __dest = (void *)(lVar17 + 0x20);
      }
      else {
        lVar20 = *plVar25;
        if (lVar20 == 0) goto LAB_05bea9b0;
        if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_05bea9c8;
        lVar20 = *(long *)(lVar20 + uVar15 * 8 + 0x20);
        if (lVar20 == 0) goto LAB_05bea9b0;
        uVar12 = FUN_05c48e08(lVar20,0);
                    /* try { // try from 05bea734 to 05cea737 has its CatchHandler @ 05bea7b8 */
                    /* try { // try from 05bea738 to 05cea73b has its CatchHandler @ 05bea7a4 */
                    /* try { // try from 05bea73c to 05cea73f has its CatchHandler @ 05bea7a0 */
                    /* try { // try from 05bea740 to 05cea743 has its CatchHandler @ 05bea784 */
                    /* try { // try from 05bea744 to 05cea747 has its CatchHandler @ 05bea77c */
                    /* try { // try from 05bea748 to 05cea74b has its CatchHandler @ 05bea778 */
        in_stack_00000128 = 0;
        in_stack_00000120 = 0;
        in_stack_00000138 = 0;
        in_stack_00000130 = 0;
                    /* try { // try from 05bea74c to 05cea74f has its CatchHandler @ 05bea774 */
        in_stack_00000108 = 0;
        in_stack_00000100 = 0;
        in_stack_00000118 = 0;
        in_stack_00000110 = 0;
                    /* try { // try from 05bea750 to 05cea753 has its CatchHandler @ 05bea770 */
        in_stack_000000f8 = 0;
        in_stack_000000f0 = 0;
                    /* try { // try from 05bea754 to 05cea757 has its CatchHandler @ 05bea76c */
        FUN_05c3debc(&stack0x000000f0,uVar12,uVar6 + 1,0);
                    /* catch() { ... } // from try @ 05bea530 with catch @ 05bea758
                       try { // try from 05bea758 to 05cea7d3 has its CatchHandler @ 05bea010 */
                    /* catch() { ... } // from try @ 05bea624 with catch @ 05bea75c */
                    /* catch() { ... } // from try @ 05bea5b8 with catch @ 05bea760 */
                    /* catch() { ... } // from try @ 05bea418 with catch @ 05bea764 */
        memcpy(&stack0x00000050,&stack0x000000f0,0x50);
                    /* catch() { ... } // from try @ 05bea280 with catch @ 05bea768 */
                    /* catch() { ... } // from try @ 05bea754 with catch @ 05bea76c */
                    /* catch() { ... } // from try @ 05bea750 with catch @ 05bea770 */
        if (*(uint *)(lVar17 + 0x18) <= uVar15) goto LAB_05bea9c8;
                    /* catch() { ... } // from try @ 05bea74c with catch @ 05bea774 */
                    /* catch() { ... } // from try @ 05bea748 with catch @ 05bea778 */
        __dest = (void *)(lVar17 + lVar11 + 0x20);
                    /* catch() { ... } // from try @ 05bea744 with catch @ 05bea77c */
                    /* catch() { ... } // from try @ 05bea180 with catch @ 05bea780 */
                    /* catch() { ... } // from try @ 05bea740 with catch @ 05bea784 */
                    /* catch() { ... } // from try @ 05bea15c with catch @ 05bea788 */
        memcpy(__dest,&stack0x00000050,0x50);
                    /* catch() { ... } // from try @ 05bea5f8 with catch @ 05bea78c */
                    /* catch() { ... } // from try @ 05bea570 with catch @ 05bea790 */
      }
      thunk_FUN_02dd37b4(__dest,0);
    }
    else {
      iVar7 = *(int *)(lVar21 + 0x18);
      if (iVar7 < (int)(uVar6 * 4)) {
        if ((int)uVar6 < 0x401) {
          uVar1 = (int)uVar6 >> 0x10;
LAB_05bea834:
          uVar6 = uVar6 | uVar1 | (int)(uVar6 | uVar1) >> 8;
          uVar6 = uVar6 | (int)uVar6 >> 4;
          uVar6 = uVar6 | (int)uVar6 >> 2;
                    /* try { // try from 05bea844 to 05cea84f has its CatchHandler @ 05bea010 */
          iVar7 = (uVar6 | (int)uVar6 >> 1) + 1;
        }
        else {
LAB_05bea7c8:
          iVar7 = uVar6 + 0x100;
        }
                    /* try { // try from 05bea850 to 05cea857 has its CatchHandler @ 05bea858 */
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
                    /* catch() { ... } // from try @ 05bea81c with catch @ 05bea858
                       catch() { ... } // from try @ 05bea850 with catch @ 05bea858 */
        FUN_05c3ecd4(lVar17 + lVar11 + 0x20,iVar7,0);
      }
      else {
                    /* catch() { ... } // from try @ 05bea4ec with catch @ 05bea794 */
                    /* catch() { ... } // from try @ 05bea3d0 with catch @ 05bea798 */
                    /* catch() { ... } // from try @ 05bea364 with catch @ 05bea79c */
                    /* catch() { ... } // from try @ 05bea73c with catch @ 05bea7a0 */
        if ((0 < (int)uVar6) && (*(char *)(unaff_x19 + 0x359) != '\0')) {
                    /* catch() { ... } // from try @ 05bea738 with catch @ 05bea7a4 */
                    /* catch() { ... } // from try @ 05bea140 with catch @ 05bea7a8 */
          iVar8 = iVar7 + 3;
                    /* catch() { ... } // from try @ 05bea424 with catch @ 05bea7ac */
          if (-1 < iVar7) {
            iVar8 = iVar7;
          }
                    /* catch() { ... } // from try @ 05bea290 with catch @ 05bea7b0 */
                    /* catch() { ... } // from try @ 05bea234 with catch @ 05bea7b4 */
                    /* catch() { ... } // from try @ 05bea1d4 with catch @ 05bea7b8
                       catch() { ... } // from try @ 05bea734 with catch @ 05bea7b8 */
                    /* catch() { ... } // from try @ 05bea5d8 with catch @ 05bea7bc
                       catch() { ... } // from try @ 05bea66c with catch @ 05bea7bc */
          if (0x100 < (int)((iVar8 >> 2) - uVar6)) {
            if (0x400 < (int)uVar6) goto LAB_05bea7c8;
            uVar1 = uVar6 >> 0x10;
            goto LAB_05bea834;
          }
        }
      }
    }
    plVar24 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if ((*in_stack_00000048 == 0) || (lVar20 = *(long *)(*in_stack_00000048 + 0x60), lVar20 == 0))
    goto LAB_05bea9b0;
    lVar17 = *(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar17 = *plVar24;
    }
    lVar17 = **(long **)(lVar17 + 0xb8);
    if (lVar17 == 0) goto LAB_05bea9b0;
    if ((*(uint *)(lVar17 + 0x18) <= uVar15) || (*(uint *)(lVar20 + 0x18) <= uVar15))
    goto LAB_05bea9c8;
    *(undefined8 *)(lVar20 + lVar11 + 0x68) = *(undefined8 *)(lVar17 + lVar18 + -0x1c);
    thunk_FUN_02dd37b4();
    uVar15 = uVar15 + 1;
    lVar11 = lVar11 + 0x50;
    lVar18 = lVar18 + 0x38;
    lVar22 = lVar22 + 8;
  } while (uVar14 != uVar15);
LAB_05bea8e8:
  puVar4 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_AppendWithCapacity__;
  lVar11 = *plVar25;
  if (lVar11 != 0) {
    lVar18 = (-(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar14 << 3) + 0x20;
    lVar22 = (long)(int)uVar9 * 0x50 + 0x20;
    do {
      uVar9 = (uint)uVar14;
      if ((int)*(uint *)(lVar11 + 0x18) <= (int)uVar9) {
LAB_05bea11c:
        return *(undefined4 *)(unaff_x19 + 0x4a0);
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar9) {
LAB_05bea9c8:
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      uVar12 = *(undefined8 *)(lVar11 + lVar18);
      if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar14 = FUN_0606a004(uVar12,0,0);
      if ((uVar14 & 1) == 0) goto LAB_05bea11c;
      if ((*in_stack_00000048 == 0) || (lVar11 = *(long *)(*in_stack_00000048 + 0x60), lVar11 == 0))
      break;
      uVar6 = *(uint *)(lVar11 + 0x18);
      if ((int)uVar9 < (int)uVar6) {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          uVar6 = *(uint *)(lVar11 + 0x18);
        }
        if (uVar6 <= uVar9) goto LAB_05bea9c8;
        FUN_05c3fc70(lVar11 + lVar22,0,1,0);
      }
      lVar11 = *plVar25;
      uVar14 = (ulong)(uVar9 + 1);
      lVar22 = lVar22 + 0x50;
      lVar18 = lVar18 + 8;
    } while (lVar11 != 0);
  }
LAB_05bea9b0:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


