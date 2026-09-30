/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$get_BufferSize
ENTRY_POINT: 0145f114
PROGRAM: Lovesick-libil2cpp.so
SCORE: 116
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__get_BufferSize(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  undefined8 uVar11;
  undefined8 unaff_x23;
  long lVar12;
  uint unaff_w24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  float unaff_s8;
  long in_stack_00000008;
  float fStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  
  while( true ) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar5 = FUN_01457470(unaff_x22 & 0xffffffff,unaff_w24 != 0,unaff_x23);
    lVar6 = unaff_x29;
    if ((uVar5 & 1) != 0) goto LAB_0145f19c;
    if (((*(long *)(unaff_x19 + 0x20) == 0) ||
        (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x70), lVar6 == 0)) ||
       (FUN_0132138c(lVar6,unaff_x22 & 0xffffffff,&stack0x00000028,
                     *(undefined8 *)StringLiteral_11624), in_stack_00000028 == 0)) break;
    FUN_01600424(*(undefined8 *)System_Threading_WaitCallback_TypeInfo,
                 *(undefined8 *)(in_stack_00000028 + 0x10),*(undefined8 *)PTR_DAT_033edb18,0);
    while( true ) {
      FUN_0160c8e8();
      lVar6 = unaff_x29;
LAB_0145f19c:
      lVar12 = *(long *)(unaff_x19 + 0x20);
      unaff_x29 = lVar6 + 1;
      if (lVar12 == 0) goto LAB_0145f564;
      if ((*(byte *)(unaff_x28 + 0xa98) & 1) == 0) {
        thunk_FUN_00d48444(StringLiteral_11854);
        *(undefined1 *)(unaff_x28 + 0xa98) = 1;
      }
      lVar12 = *(long *)(lVar12 + 0x70);
      unaff_x22 = lVar6 - 3;
      iVar8 = 0;
      if (lVar12 != 0) {
        iVar8 = *(int *)(lVar12 + 0x18);
      }
      if ((long)iVar8 <= (long)unaff_x22) {
        lVar6 = *(long *)(unaff_x19 + 0x58);
        uVar11 = (**(code **)(*unaff_x20 + 0x168))();
        if ((lVar6 == 0) ||
           (uVar11 = FUN_0160c430(lVar6,uVar11,0), puVar2 = StringLiteral_302,
           puVar1 = Newtonsoft_Json_Linq_JToken_TypeInfo, in_stack_00000008 == 0))
        goto LAB_0145f564;
        FUN_01458618(uVar11,*(undefined8 *)(unaff_x19 + 0x20),*(undefined8 *)(unaff_x19 + 0x48),
                     *(undefined8 *)(unaff_x19 + 0x68),*(undefined8 *)(unaff_x19 + 0x78));
        lVar6 = *(long *)(unaff_x19 + 0x38);
        if (lVar6 != 0) {
          (**(code **)(lVar6 + 0x18))
                    (DAT_028aa3e4,*(undefined8 *)(lVar6 + 0x40),
                     *(undefined8 *)UnityEngine_GUIStyle___TypeInfo,*(undefined8 *)(lVar6 + 0x28));
        }
        if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0145f564;
        FUN_0143f4b4(*(long *)(unaff_x19 + 0x40),0);
        plVar3 = *(long **)(unaff_x19 + 0x50);
        if (plVar3 == (long *)0x0) goto LAB_0145f3f8;
        lVar6 = *plVar3;
        uVar11 = *(undefined8 *)(unaff_x19 + 0x38);
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar5 == 0) goto LAB_0145f280;
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_0145f268;
      }
      lVar6 = *(long *)(unaff_x19 + 0x78);
      if (lVar6 == 0) goto LAB_0145f564;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_0145f568;
      uVar11 = *(undefined8 *)(lVar6 + unaff_x29 * 8);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar5 = FUN_02681b9c(uVar11,0,0);
      if ((uVar5 & 1) == 0) break;
      plVar3 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,6);
      if (plVar3 == (long *)0x0) goto LAB_0145f564;
      if ((*unaff_x25 != 0) &&
         (lVar6 = thunk_FUN_00d6225c(*unaff_x25,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0)) {
LAB_0145f56c:
        uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar11,0);
      }
      if ((int)plVar3[3] == 0) goto LAB_0145f568;
      plVar3[4] = *unaff_x25;
      if (((*(long *)(unaff_x19 + 0x20) == 0) ||
          (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x70), lVar6 == 0)) ||
         (FUN_0132138c(lVar6,(int)unaff_x29 + -4,&stack0x00000028,*(undefined8 *)StringLiteral_11624
                      ), in_stack_00000028 == 0)) goto LAB_0145f564;
      lVar6 = *(long *)(in_stack_00000028 + 0x10);
      if ((lVar6 != 0) &&
         (lVar12 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar12 == 0))
      goto LAB_0145f56c;
      uVar9 = *(uint *)(plVar3 + 3);
      if (uVar9 < 2) {
LAB_0145f568:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar3[5] = lVar6;
      if (*unaff_x26 != 0) {
        lVar6 = thunk_FUN_00d6225c(*unaff_x26,*(undefined8 *)(*plVar3 + 0x40));
        if (lVar6 == 0) goto LAB_0145f56c;
        uVar9 = *(uint *)(plVar3 + 3);
      }
      if (uVar9 < 3) goto LAB_0145f568;
      plVar3[6] = *unaff_x26;
      lVar6 = *(long *)(unaff_x19 + 0x78);
      if (lVar6 == 0) goto LAB_0145f564;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_0145f568;
      plVar4 = *(long **)(lVar6 + unaff_x29 * 8);
      if (plVar4 == (long *)0x0) goto LAB_0145f564;
      uStack0000000000000014 =
           (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
      lVar6 = FUN_0176eb1c((long)&stack0x00000010 + 4,0);
      if ((lVar6 != 0) &&
         (lVar12 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar12 == 0))
      goto LAB_0145f56c;
      uVar9 = *(uint *)(plVar3 + 3);
      if (uVar9 < 4) goto LAB_0145f568;
      plVar3[7] = lVar6;
      if (*unaff_x21 != 0) {
        lVar6 = thunk_FUN_00d6225c(*unaff_x21,*(undefined8 *)(*plVar3 + 0x40));
        if (lVar6 == 0) goto LAB_0145f56c;
        uVar9 = *(uint *)(plVar3 + 3);
      }
      if (uVar9 < 5) goto LAB_0145f568;
      plVar3[8] = *unaff_x21;
      lVar6 = *(long *)(unaff_x19 + 0x78);
      if (lVar6 == 0) goto LAB_0145f564;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x22) goto LAB_0145f568;
      plVar4 = *(long **)(lVar6 + unaff_x29 * 8);
      if (plVar4 == (long *)0x0) goto LAB_0145f564;
      uStack0000000000000014 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400))
      ;
      lVar6 = FUN_0176eb1c((long)&stack0x00000010 + 4,0);
      if ((lVar6 != 0) &&
         (lVar12 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar12 == 0))
      goto LAB_0145f56c;
      if (*(uint *)(plVar3 + 3) < 6) goto LAB_0145f568;
      plVar3[9] = lVar6;
      FUN_01600844(plVar3,0);
    }
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if (lVar6 == 0) break;
    unaff_w24 = (uint)*(byte *)(lVar6 + 0x49);
    unaff_x23 = *(undefined8 *)(lVar6 + 0x80);
    param_1 = *(long *)Method_System_Collections_Generic_List<Material>_Add__;
  }
LAB_0145f564:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar10 = piVar10 + 4;
    if (uVar5 == 0) break;
LAB_0145f268:
    if (*(long *)(piVar10 + -2) == *(long *)StringLiteral_2590) {
      puVar7 = (undefined8 *)(lVar6 + (long)(*piVar10 + 1) * 0x10 + 0x138);
      goto LAB_0145f3e8;
    }
  }
LAB_0145f280:
  puVar7 = (undefined8 *)FUN_00d59724(plVar3,*(long *)StringLiteral_2590,1);
LAB_0145f3e8:
  (*(code *)*puVar7)(plVar3,uVar11,puVar7[1]);
LAB_0145f3f8:
  plVar3 = *(long **)(unaff_x19 + 0x58);
  if ((plVar3 != (long *)0x0) && (2 < *(int *)(unaff_x19 + 0x28))) {
    uVar11 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    FUN_02660dac(uVar11,0);
  }
  if (3 < *(int *)(unaff_x19 + 0x28)) {
    if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_0145f564;
    lVar6 = FUN_020407b0(*(long *)(unaff_x19 + 0x70),0);
    fStack0000000000000010 = (float)lVar6 - unaff_s8;
    uVar11 = FUN_017841b4(&stack0x00000010,*(undefined8 *)StringLiteral_12992,0);
    uVar11 = FUN_015f5b28(*(undefined8 *)Oculus_Platform_Request<CowatchViewerList>_TypeInfo,uVar11,
                          0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    FUN_02660dac(uVar11,0);
    if (3 < *(int *)(unaff_x19 + 0x28)) {
      if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_0145f564;
      in_stack_00000018 = FUN_02040648(*(long *)(unaff_x19 + 0x70),0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar1);
      }
      uVar11 = FUN_01789268(&stack0x00000018,0);
      uVar11 = FUN_015f5b28(*(undefined8 *)
                             Method_System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>_ContainsKey__
                            ,uVar11,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      FUN_02660dac(uVar11,0);
    }
  }
  return 0;
}


