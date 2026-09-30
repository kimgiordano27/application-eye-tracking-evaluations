/*
FUNCTION_NAME: OVRManager$$set_instance
ENTRY_POINT: 02c7b8c8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 OVRManager__set_instance(ulong param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  List_1_t42C05176F555EAC7A1ED888D452DC092C71D2A00 *pLVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long unaff_x29;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 *in_stack_000000e0;
  undefined8 *in_stack_000000e8;
  undefined8 *in_stack_000000f0;
  undefined8 *in_stack_000000f8;
  undefined8 *in_stack_00000100;
  undefined8 *in_stack_00000108;
  undefined4 uStack0000000000000144;
  undefined4 in_stack_00000148;
  undefined4 uStack00000000000001c0;
  undefined4 uStack00000000000001c4;
  undefined4 uStack00000000000001c8;
  undefined4 uStack00000000000001cc;
  undefined4 uStack00000000000001d0;
  undefined4 uStack00000000000001d4;
  undefined4 uStack00000000000001d8;
  undefined4 uStack00000000000001dc;
  undefined4 in_stack_00000278;
  undefined4 in_stack_0000027c;
  undefined4 in_stack_00000288;
  undefined4 in_stack_0000028c;
  undefined8 in_stack_00000364;
  undefined8 in_stack_0000036c;
  undefined4 in_stack_00000374;
  undefined8 in_stack_00000378;
  undefined8 in_stack_000003b4;
  undefined8 in_stack_000003bc;
  undefined4 in_stack_000003c4;
  undefined8 in_stack_000003c8;
  undefined8 in_stack_00000434;
  undefined8 in_stack_0000043c;
  undefined4 in_stack_00000444;
  undefined8 in_stack_00000448;
  
  uStack0000000000000144 = param_2;
  do {
    bVar1 = GrabPoseScore_IsBetterThan_m76019F604BD29139C0229997687BAA00B3E7296D
                      (param_1,unaff_x29 + -0xd8,0);
    if ((bVar1 & 1) != 0) {
      uVar4 = *(undefined4 *)(unaff_x29 + -0xd0);
      in_stack_000000e0[0x6a] = in_stack_000000e0[0x5d];
      *(undefined4 *)(unaff_x29 + -0x68) = uVar4;
      PoseUtils_CopyFrom_m57A3FC8929CFDCAF56595CA8D53655258CC186EA
                (in_stack_000000e0[0x73],unaff_x29 + -0x60,0);
    }
    do {
      uVar4 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x74),1);
      *(undefined4 *)(unaff_x29 + -0x74) = uVar4;
      iVar3 = *(int *)(unaff_x29 + -0x74);
      pLVar7 = *(List_1_t42C05176F555EAC7A1ED888D452DC092C71D2A00 **)
                (in_stack_000000e0[0x75] + 0x20);
      NullCheck(pLVar7);
      iVar5 = List_1_get_Count_mCA62AF4D283820F9E126CACD7D9027E6B6BBC5F6_inline
                        (pLVar7,(MethodInfo *)*in_stack_000000f8);
      if (iVar5 <= iVar3) {
        in_stack_000000e0[0x76] = in_stack_000000e0[0x6a];
        *(undefined4 *)(unaff_x29 + -8) = *(undefined4 *)(unaff_x29 + -0x68);
        return *(undefined4 *)(unaff_x29 + -0x10);
      }
      in_stack_000000e0[0x3d] = *(undefined8 *)(in_stack_000000e0[0x75] + 0x20);
      iVar3 = *(int *)(unaff_x29 + -0x74);
      NullCheck((void *)in_stack_000000e0[0x3d]);
      List_1_get_Item_mC84A7EDAAA0611F7545EA939123B35140C6F60F6
                ((List_1_t42C05176F555EAC7A1ED888D452DC092C71D2A00 *)in_stack_000000e0[0x3d],iVar3,
                 (MethodInfo *)*in_stack_00000100);
      memcpy(&stack0x00000538,&stack0x0000050c,0x2c);
      memcpy((BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006 *)(unaff_x29 + -0xa0),
             &stack0x00000538,0x2c);
      in_stack_000000e0[0x30] = *(undefined8 *)(in_stack_000000e0[0x75] + 0x20);
      iVar3 = *(int *)(unaff_x29 + -0x74);
      in_stack_000000e0[0x2e] = *(undefined8 *)(in_stack_000000e0[0x75] + 0x20);
      NullCheck((void *)in_stack_000000e0[0x2e]);
      iVar5 = List_1_get_Count_mCA62AF4D283820F9E126CACD7D9027E6B6BBC5F6_inline
                        ((List_1_t42C05176F555EAC7A1ED888D452DC092C71D2A00 *)in_stack_000000e0[0x2e]
                         ,(MethodInfo *)*in_stack_000000f8);
      NullCheck((void *)in_stack_000000e0[0x30]);
      pLVar7 = (List_1_t42C05176F555EAC7A1ED888D452DC092C71D2A00 *)in_stack_000000e0[0x30];
      iVar2 = il2cpp_codegen_add<int,int>(iVar3,1);
      iVar3 = 0;
      if (iVar5 != 0) {
        iVar3 = iVar2 / iVar5;
      }
      List_1_get_Item_mC84A7EDAAA0611F7545EA939123B35140C6F60F6
                (pLVar7,iVar2 - iVar3 * iVar5,(MethodInfo *)*in_stack_00000100);
      memcpy(&stack0x000004c0,&stack0x00000494,0x2c);
      memcpy((void *)(unaff_x29 + -0xcc),&stack0x000004c0,0x2c);
      bVar1 = BezierControlPoint_get_Disconnected_m3AC2005E3FC752A93A7FF802D14A2AE818A9FD52_inline
                        ((BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006 *)
                         (unaff_x29 + -0xa0),(MethodInfo *)0x0);
    } while (((bVar1 & 1) == 0) &&
            (bVar1 = BezierControlPoint_get_Disconnected_m3AC2005E3FC752A93A7FF802D14A2AE818A9FD52_inline
                               ((BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006 *)
                                (unaff_x29 + -0xcc),(MethodInfo *)0x0), (bVar1 & 1) != 0));
    bVar1 = BezierControlPoint_get_Disconnected_m3AC2005E3FC752A93A7FF802D14A2AE818A9FD52_inline
                      ((BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006 *)
                       (unaff_x29 + -0xa0),(MethodInfo *)0x0);
    if (((bVar1 & 1) == 0) ||
       (bVar1 = BezierControlPoint_get_Disconnected_m3AC2005E3FC752A93A7FF802D14A2AE818A9FD52_inline
                          ((BezierControlPoint_tEB839A219399D39791E1DBA363249EB163EF2006 *)
                           (unaff_x29 + -0xcc),(MethodInfo *)0x0), (bVar1 & 1) == 0)) {
      in_stack_000000e0[0x21] = *(undefined8 *)(in_stack_000000e0[0x75] + 0x20);
      NullCheck((void *)in_stack_000000e0[0x21]);
      iVar3 = List_1_get_Count_mCA62AF4D283820F9E126CACD7D9027E6B6BBC5F6_inline
                        ((List_1_t42C05176F555EAC7A1ED888D452DC092C71D2A00 *)in_stack_000000e0[0x21]
                         ,(MethodInfo *)*in_stack_000000f8);
      if (iVar3 == 1) goto LAB_02c7b290;
      uVar6 = il2cpp_codegen_object_new
                        (*(Il2CppClass **)
                          Method_Oculus_Interaction_FirstHoverInteractorGroup_<>c_<_cctor>b__34_0__)
      ;
      in_stack_000000e0[0x10] = uVar6;
      U3CU3Ec__DisplayClass7_0__ctor_mEECAE92A65EDC04FF3CE99C66A0D5CB9EDB276BB
                (in_stack_000000e0[0x10]);
      in_stack_000000e0[0x56] = in_stack_000000e0[0x10];
      in_stack_000000e0[0xf] = in_stack_000000e0[0x56];
      in_stack_000000e0[0xe] = in_stack_000000e0[0x71];
      BezierControlPoint_GetPose_m640F1A9BF64988E736D64EAF3C74AAB0ABA71B2E
                (unaff_x29 + -0xa0,in_stack_000000e0[0xe],0);
      in_stack_000000e0[0xb] = in_stack_000003bc;
      in_stack_000000e0[10] = in_stack_000003b4;
      NullCheck((void *)in_stack_000000e0[0xf]);
      lVar8 = in_stack_000000e0[0xf];
      uVar6 = in_stack_000000e0[10];
      *(undefined8 *)(lVar8 + 0x18) = in_stack_000000e0[0xb];
      *(undefined8 *)(lVar8 + 0x10) = uVar6;
      *(undefined8 *)(lVar8 + 0x24) = in_stack_000003c8;
      *(ulong *)(lVar8 + 0x1c) = CONCAT44(in_stack_000003c4,(int)((ulong)in_stack_000003bc >> 0x20))
      ;
      in_stack_000000e0[5] = in_stack_000000e0[0x56];
      in_stack_000000e0[4] = in_stack_000000e0[0x71];
      BezierControlPoint_GetPose_m640F1A9BF64988E736D64EAF3C74AAB0ABA71B2E
                (unaff_x29 + -0xcc,in_stack_000000e0[4],0);
      in_stack_000000e0[1] = in_stack_0000036c;
      *in_stack_000000e0 = in_stack_00000364;
      NullCheck((void *)in_stack_000000e0[5]);
      lVar8 = in_stack_000000e0[5];
      uVar6 = *in_stack_000000e0;
      *(undefined8 *)(lVar8 + 0x40) = in_stack_000000e0[1];
      *(undefined8 *)(lVar8 + 0x38) = uVar6;
      *(undefined8 *)(lVar8 + 0x4c) = in_stack_00000378;
      *(ulong *)(lVar8 + 0x44) = CONCAT44(in_stack_00000374,(int)((ulong)in_stack_0000036c >> 0x20))
      ;
      in_stack_000000e8[0x38] = in_stack_000000e0[0x56];
      in_stack_000000e8[0x37] = in_stack_000000e0[0x71];
      uVar4 = BezierControlPoint_GetTangent_m70DB28F505C94B6132047A3E8D493FED66AF9264
                        (unaff_x29 + -0xa0,in_stack_000000e8[0x37],0);
      in_stack_000000e8[0x35] = CONCAT44(uStack0000000000000144,uVar4);
      NullCheck((void *)in_stack_000000e8[0x38]);
      lVar8 = in_stack_000000e8[0x38];
      *(undefined8 *)(lVar8 + 0x2c) = in_stack_000000e8[0x35];
      *(undefined4 *)(lVar8 + 0x34) = in_stack_00000148;
      in_stack_000000e8[0x32] = in_stack_000000e0[0x74];
      in_stack_000000e8[0x30] = *(undefined8 *)in_stack_000000e8[0x32];
      uVar4 = *(undefined4 *)((undefined8 *)in_stack_000000e8[0x32] + 1);
      in_stack_000000e8[0x2f] = in_stack_000000e0[0x56];
      NullCheck((void *)in_stack_000000e8[0x2f]);
      in_stack_000000e8[0x2e] = in_stack_000000e8[0x2f] + 0x10;
      in_stack_000000e8[0x2c] = *(undefined8 *)in_stack_000000e8[0x2e];
      uVar13 = *(undefined4 *)((undefined8 *)in_stack_000000e8[0x2e] + 1);
      in_stack_000000e8[0x2b] = in_stack_000000e0[0x56];
      NullCheck((void *)in_stack_000000e8[0x2b]);
      in_stack_000000e8[0x29] = *(undefined8 *)(in_stack_000000e8[0x2b] + 0x2c);
      in_stack_000000e8[0x28] = in_stack_000000e0[0x56];
      NullCheck((void *)in_stack_000000e8[0x28]);
      in_stack_000000e8[0x27] = in_stack_000000e8[0x28] + 0x38;
      in_stack_000000e8[0x25] = *(undefined8 *)in_stack_000000e8[0x27];
      in_stack_000000e8[0x24] = in_stack_000000e0[0x56];
      NullCheck((void *)in_stack_000000e8[0x24]);
      in_stack_000000e8[0x23] = in_stack_000000e8[0x24] + 0x54;
      uVar6 = in_stack_000000e0[0x75];
      in_stack_000000e8[0x1e] = in_stack_000000e8[0x30];
      in_stack_000000e8[0x1c] = in_stack_000000e8[0x2c];
      in_stack_000000e8[0x1a] = in_stack_000000e8[0x29];
      in_stack_000000e8[0x18] = in_stack_000000e8[0x25];
      uVar12 = in_stack_0000028c;
      uVar4 = BezierGrabSurface_NearestPointInTriangle_m05E37236BB0D694285AD8EC59CC225E7E19068DA
                        (in_stack_00000288,in_stack_0000028c,uVar4,in_stack_00000278,
                         in_stack_0000027c,uVar13,uVar6,in_stack_000000e8[0x23],0);
      in_stack_000000e8[0x21] = CONCAT44(uVar12,uVar4);
      in_stack_000000e8[0x17] = in_stack_000000e0[0x56];
      in_stack_000000e8[0x16] = in_stack_000000e0[0x74];
      uVar6 = *(undefined8 *)(in_stack_000000e8[0x16] + 0xc);
      in_stack_000000e8[0x14] = *(undefined8 *)(in_stack_000000e8[0x16] + 0x14);
      in_stack_000000e8[0x13] = uVar6;
      in_stack_000000e8[0x12] = in_stack_000000e0[0x56];
      NullCheck((void *)in_stack_000000e8[0x12]);
      in_stack_000000e8[0x11] = in_stack_000000e8[0x12] + 0x10;
      uVar6 = *(undefined8 *)(in_stack_000000e8[0x11] + 0xc);
      in_stack_000000e8[0x10] = *(undefined8 *)(in_stack_000000e8[0x11] + 0x14);
      in_stack_000000e8[0xf] = uVar6;
      in_stack_000000e8[0xe] = in_stack_000000e0[0x56];
      NullCheck((void *)in_stack_000000e8[0xe]);
      in_stack_000000e8[0xd] = in_stack_000000e8[0xe] + 0x38;
      uVar6 = *(undefined8 *)(in_stack_000000e8[0xd] + 0xc);
      in_stack_000000e8[0xc] = *(undefined8 *)(in_stack_000000e8[0xd] + 0x14);
      in_stack_000000e8[0xb] = uVar6;
      uVar6 = in_stack_000000e0[0x75];
      in_stack_000000e8[8] = in_stack_000000e8[0x14];
      in_stack_000000e8[7] = in_stack_000000e8[0x13];
      in_stack_000000e8[6] = in_stack_000000e8[0x10];
      in_stack_000000e8[5] = in_stack_000000e8[0xf];
      in_stack_000000e8[4] = in_stack_000000e8[0xc];
      in_stack_000000e8[3] = in_stack_000000e8[0xb];
      uVar4 = uStack00000000000001d4;
      uVar13 = uStack00000000000001d8;
      uVar12 = BezierGrabSurface_ProgressForRotation_m7C5C9C461AA28525C44DFA655CF74DFC5590F110
                         (uStack00000000000001d0,uStack00000000000001d4,uStack00000000000001d8,
                          uStack00000000000001dc,uStack00000000000001c0,uStack00000000000001c4,
                          uStack00000000000001c8,uStack00000000000001cc,uVar6,0);
      NullCheck((void *)in_stack_000000e8[0x17]);
      *(undefined4 *)(in_stack_000000e8[0x17] + 0x58) = uVar12;
      in_stack_000000e8[2] = in_stack_000000e0[0x74];
      in_stack_000000e8[1] = in_stack_000000e0[0x72];
      *in_stack_000000e8 = in_stack_000000e0[0x71];
      uVar9 = in_stack_000000e0[0x56];
      uVar6 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000108);
      PoseCalculator__ctor_m47E4E78AB51E57D217B88D2C4F3DF70E6D825821
                (uVar6,uVar9,
                 *(undefined8 *)
                  Method_Oculus_Interaction_PoseDetection_FingerFeatureStateProvider_<>c_<Start>b__17_0__
                 ,0);
      uVar10 = in_stack_000000e0[0x56];
      uVar9 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000108);
      PoseCalculator__ctor_m47E4E78AB51E57D217B88D2C4F3DF70E6D825821
                (uVar9,uVar10,
                 *(undefined8 *)
                  Method_Oculus_Interaction_PoseDetection_FingerFeatureStateProvider_<>c__DisplayClass20_0_<ReadStateThresholds>b__0__
                 ,0);
      uVar12 = GrabPoseHelper_CalculateBestPoseAtSurface_mBBA788F03BB3CEE5961FBBE8548910A364E02634
                         (in_stack_000000e8[2],unaff_x29 + -0x60,in_stack_000000e8[1],
                          *in_stack_000000e8,uVar6,uVar9,0);
      in_stack_000000e0[0x5d] = CONCAT44(uVar4,uVar12);
      *(undefined4 *)(unaff_x29 + -0xd0) = uVar13;
    }
    else {
LAB_02c7b290:
      in_stack_000000e0[0x1f] = in_stack_000000e0[0x71];
      BezierControlPoint_GetPose_m640F1A9BF64988E736D64EAF3C74AAB0ABA71B2E
                (unaff_x29 + -0xa0,in_stack_000000e0[0x1f]);
      in_stack_000000e0[0x1b] = in_stack_0000043c;
      in_stack_000000e0[0x1a] = in_stack_00000434;
      in_stack_000000e0[0x59] = in_stack_000000e0[0x1b];
      in_stack_000000e0[0x58] = in_stack_000000e0[0x1a];
      *(undefined8 *)(unaff_x29 + -0xec) = in_stack_00000448;
      *(ulong *)(unaff_x29 + -0xf4) =
           CONCAT44(in_stack_00000444,(int)((ulong)in_stack_0000043c >> 0x20));
      PoseUtils_CopyFrom_m57A3FC8929CFDCAF56595CA8D53655258CC186EA
                (unaff_x29 + -0x60,unaff_x29 + -0x100,0);
      in_stack_000000e0[0x15] = in_stack_000000e0[0x74];
      in_stack_000000e0[0x14] = in_stack_000000e0[0x72];
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_UnityEngine_UIElements_DefaultEventSystem_<>c_<ProcessMouseEvents>b__36_1__
                );
      uVar4 = PoseMeasureParameters_get_PositionRotationWeight_mBED7106F791563503246EE9BF1298C2EB1DAD8DA_inline
                        (&stack0x0000063c,(MethodInfo *)0x0);
      in_stack_000000e0[0x11] = 0;
      GrabPoseScore__ctor_m1A6F937B93F6FF5956C7D17BEF85C6A327F9AABF
                (uVar4,&stack0x00000408,in_stack_000000e0[0x15],unaff_x29 + -0x60,0);
      in_stack_000000e0[0x5d] = in_stack_000000e0[0x11];
      *(undefined4 *)(unaff_x29 + -0xd0) = 0;
    }
    uVar11 = in_stack_000000e0[0x6a];
    in_stack_00000148 = *(undefined4 *)(unaff_x29 + -0x68);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000f0);
    param_1 = uVar11 & 0xffffffff;
    uStack0000000000000144 = (undefined4)(uVar11 >> 0x20);
  } while( true );
}


