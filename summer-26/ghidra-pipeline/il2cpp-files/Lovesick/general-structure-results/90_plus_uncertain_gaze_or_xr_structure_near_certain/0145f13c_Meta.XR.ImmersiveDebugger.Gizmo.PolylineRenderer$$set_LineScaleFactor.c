/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$set_LineScaleFactor
ENTRY_POINT: 0145f13c
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


undefined8 Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__set_LineScaleFactor(long param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  undefined8 uVar12;
  long lVar13;
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
  
code_r0x0145f13c:
  if (((param_1 != 0) && (*(long *)(param_1 + 0x70) != 0)) &&
     (FUN_0132138c(*(long *)(param_1 + 0x70),unaff_x22 & 0xffffffff,&stack0x00000028,
                   *(undefined8 *)StringLiteral_11624), in_stack_00000028 != 0)) {
    FUN_01600424(*(undefined8 *)System_Threading_WaitCallback_TypeInfo,
                 *(undefined8 *)(in_stack_00000028 + 0x10),*(undefined8 *)PTR_DAT_033edb18,0);
    while( true ) {
      FUN_0160c8e8();
      lVar10 = unaff_x29;
      while( true ) {
        lVar13 = *(long *)(unaff_x19 + 0x20);
        unaff_x29 = lVar10 + 1;
        if (lVar13 == 0) goto LAB_0145f564;
        if ((*(byte *)(unaff_x28 + 0xa98) & 1) == 0) {
          thunk_FUN_00d48444(StringLiteral_11854);
          *(undefined1 *)(unaff_x28 + 0xa98) = 1;
        }
        lVar13 = *(long *)(lVar13 + 0x70);
        unaff_x22 = lVar10 - 3;
        iVar8 = 0;
        if (lVar13 != 0) {
          iVar8 = *(int *)(lVar13 + 0x18);
        }
        if ((long)iVar8 <= (long)unaff_x22) {
          lVar10 = *(long *)(unaff_x19 + 0x58);
          uVar12 = (**(code **)(*unaff_x20 + 0x168))();
          if ((lVar10 == 0) ||
             (uVar12 = FUN_0160c430(lVar10,uVar12,0), puVar3 = StringLiteral_302,
             puVar2 = Newtonsoft_Json_Linq_JToken_TypeInfo, in_stack_00000008 == 0))
          goto LAB_0145f564;
          FUN_01458618(uVar12,*(undefined8 *)(unaff_x19 + 0x20),*(undefined8 *)(unaff_x19 + 0x48),
                       *(undefined8 *)(unaff_x19 + 0x68),*(undefined8 *)(unaff_x19 + 0x78));
          lVar10 = *(long *)(unaff_x19 + 0x38);
          if (lVar10 != 0) {
            (**(code **)(lVar10 + 0x18))
                      (DAT_028aa3e4,*(undefined8 *)(lVar10 + 0x40),
                       *(undefined8 *)UnityEngine_GUIStyle___TypeInfo,*(undefined8 *)(lVar10 + 0x28)
                      );
          }
          if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0145f564;
          FUN_0143f4b4(*(long *)(unaff_x19 + 0x40),0);
          plVar5 = *(long **)(unaff_x19 + 0x50);
          if (plVar5 == (long *)0x0) goto LAB_0145f3f8;
          lVar10 = *plVar5;
          uVar12 = *(undefined8 *)(unaff_x19 + 0x38);
          uVar4 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar4 == 0) goto LAB_0145f280;
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_0145f268;
        }
        lVar10 = *(long *)(unaff_x19 + 0x78);
        if (lVar10 == 0) goto LAB_0145f564;
        if (*(uint *)(lVar10 + 0x18) <= unaff_x22) goto LAB_0145f568;
        uVar12 = *(undefined8 *)(lVar10 + unaff_x29 * 8);
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar4 = FUN_02681b9c(uVar12,0,0);
        if ((uVar4 & 1) != 0) break;
        lVar10 = *(long *)(unaff_x19 + 0x20);
        if (lVar10 == 0) goto LAB_0145f564;
        cVar1 = *(char *)(lVar10 + 0x49);
        uVar12 = *(undefined8 *)(lVar10 + 0x80);
        if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar4 = FUN_01457470(unaff_x22 & 0xffffffff,cVar1 != '\0',uVar12);
        lVar10 = unaff_x29;
        if ((uVar4 & 1) == 0) {
          param_1 = *(long *)(unaff_x19 + 0x20);
          goto code_r0x0145f13c;
        }
      }
      plVar5 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,6);
      if (plVar5 == (long *)0x0) break;
      if ((*unaff_x25 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(*unaff_x25,*(undefined8 *)(*plVar5 + 0x40)), lVar10 == 0)) {
LAB_0145f56c:
        uVar12 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar12,0);
      }
      if ((int)plVar5[3] == 0) goto LAB_0145f568;
      plVar5[4] = *unaff_x25;
      if (((*(long *)(unaff_x19 + 0x20) == 0) ||
          (lVar10 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x70), lVar10 == 0)) ||
         (FUN_0132138c(lVar10,(int)unaff_x29 + -4,&stack0x00000028,
                       *(undefined8 *)StringLiteral_11624), in_stack_00000028 == 0)) break;
      lVar10 = *(long *)(in_stack_00000028 + 0x10);
      if ((lVar10 != 0) &&
         (lVar13 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar5 + 0x40)), lVar13 == 0))
      goto LAB_0145f56c;
      uVar9 = *(uint *)(plVar5 + 3);
      if (uVar9 < 2) {
LAB_0145f568:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar5[5] = lVar10;
      if (*unaff_x26 != 0) {
        lVar10 = thunk_FUN_00d6225c(*unaff_x26,*(undefined8 *)(*plVar5 + 0x40));
        if (lVar10 == 0) goto LAB_0145f56c;
        uVar9 = *(uint *)(plVar5 + 3);
      }
      if (uVar9 < 3) goto LAB_0145f568;
      plVar5[6] = *unaff_x26;
      lVar10 = *(long *)(unaff_x19 + 0x78);
      if (lVar10 == 0) break;
      if (*(uint *)(lVar10 + 0x18) <= unaff_x22) goto LAB_0145f568;
      plVar6 = *(long **)(lVar10 + unaff_x29 * 8);
      if (plVar6 == (long *)0x0) break;
      uStack0000000000000014 =
           (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
      lVar10 = FUN_0176eb1c((long)&stack0x00000010 + 4,0);
      if ((lVar10 != 0) &&
         (lVar13 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar5 + 0x40)), lVar13 == 0))
      goto LAB_0145f56c;
      uVar9 = *(uint *)(plVar5 + 3);
      if (uVar9 < 4) goto LAB_0145f568;
      plVar5[7] = lVar10;
      if (*unaff_x21 != 0) {
        lVar10 = thunk_FUN_00d6225c(*unaff_x21,*(undefined8 *)(*plVar5 + 0x40));
        if (lVar10 == 0) goto LAB_0145f56c;
        uVar9 = *(uint *)(plVar5 + 3);
      }
      if (uVar9 < 5) goto LAB_0145f568;
      plVar5[8] = *unaff_x21;
      lVar10 = *(long *)(unaff_x19 + 0x78);
      if (lVar10 == 0) break;
      if (*(uint *)(lVar10 + 0x18) <= unaff_x22) goto LAB_0145f568;
      plVar6 = *(long **)(lVar10 + unaff_x29 * 8);
      if (plVar6 == (long *)0x0) break;
      uStack0000000000000014 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400))
      ;
      lVar10 = FUN_0176eb1c((long)&stack0x00000010 + 4,0);
      if ((lVar10 != 0) &&
         (lVar13 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar5 + 0x40)), lVar13 == 0))
      goto LAB_0145f56c;
      if (*(uint *)(plVar5 + 3) < 6) goto LAB_0145f568;
      plVar5[9] = lVar10;
      FUN_01600844(plVar5,0);
    }
  }
LAB_0145f564:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar11 = piVar11 + 4;
    if (uVar4 == 0) break;
LAB_0145f268:
    if (*(long *)(piVar11 + -2) == *(long *)StringLiteral_2590) {
      puVar7 = (undefined8 *)(lVar10 + (long)(*piVar11 + 1) * 0x10 + 0x138);
      goto LAB_0145f3e8;
    }
  }
LAB_0145f280:
  puVar7 = (undefined8 *)FUN_00d59724(plVar5,*(long *)StringLiteral_2590,1);
LAB_0145f3e8:
  (*(code *)*puVar7)(plVar5,uVar12,puVar7[1]);
LAB_0145f3f8:
  plVar5 = *(long **)(unaff_x19 + 0x58);
  if ((plVar5 != (long *)0x0) && (2 < *(int *)(unaff_x19 + 0x28))) {
    uVar12 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar3);
    }
    FUN_02660dac(uVar12,0);
  }
  if (3 < *(int *)(unaff_x19 + 0x28)) {
    if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_0145f564;
    lVar10 = FUN_020407b0(*(long *)(unaff_x19 + 0x70),0);
    fStack0000000000000010 = (float)lVar10 - unaff_s8;
    uVar12 = FUN_017841b4(&stack0x00000010,*(undefined8 *)StringLiteral_12992,0);
    uVar12 = FUN_015f5b28(*(undefined8 *)Oculus_Platform_Request<CowatchViewerList>_TypeInfo,uVar12,
                          0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar3);
    }
    FUN_02660dac(uVar12,0);
    if (3 < *(int *)(unaff_x19 + 0x28)) {
      if (*(long *)(unaff_x19 + 0x70) == 0) goto LAB_0145f564;
      in_stack_00000018 = FUN_02040648(*(long *)(unaff_x19 + 0x70),0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      uVar12 = FUN_01789268(&stack0x00000018,0);
      uVar12 = FUN_015f5b28(*(undefined8 *)
                             Method_System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>_ContainsKey__
                            ,uVar12,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar3);
      }
      FUN_02660dac(uVar12,0);
    }
  }
  return 0;
}


