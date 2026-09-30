/*
FUNCTION_NAME: System.Collections.Generic.Comparer<double>$$CreateComparer
ENTRY_POINT: 04f6c7f8
PROGRAM: vrfs-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Collections_Generic_Comparer<double>__CreateComparer(ulong param_1,float param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  int unaff_w24;
  float fVar9;
  float fVar10;
  double dVar11;
  undefined8 uVar12;
  float unaff_s8;
  float unaff_s10;
  float unaff_s11;
  double unaff_d12;
  float unaff_s13;
  float unaff_s14;
  double unaff_d15;
  double in_stack_000000b8;
  
  if ((param_1 & 1) != 0) {
    param_2 = param_2 + unaff_s13;
  }
                    /* try { // try from 04f6c840 to 0506c86b has its CatchHandler @ 04f6c584 */
  fVar9 = unaff_s8;
  if (unaff_s11 < unaff_s8) {
    fVar9 = unaff_s11;
  }
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 04f6c83c with catch @ 04f6c848
                        */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 04f6c770 with catch @ 04f6c84c
                        */
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 04f6c6bc with catch @ 04f6c850
                        */
  fVar9 = fVar9 * 255.0;
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 04f6c6fc with catch @ 04f6c854
                        */
  if (unaff_s8 < 0.0) {
    fVar9 = 0.0;
  }
  dVar11 = modf((double)fVar9,&stack0x000000b8);
                    /* try { // try from 04f6c86c to 0506c86f has its CatchHandler @ 04f6c8e8 */
  if (0.0 <= fVar9) {
    if (dVar11 == unaff_d15) {
      fVar9 = (float)in_stack_000000b8 + unaff_s11;
      goto LAB_04f6c8a4;
    }
    fVar10 = (float)(int)(fVar9 + 0.5);
  }
  else if (dVar11 == unaff_d12) {
    fVar9 = (float)in_stack_000000b8 + unaff_s13;
LAB_04f6c8a4:
    fVar10 = (float)in_stack_000000b8;
    if (((long)in_stack_000000b8 & 1U) != 0) {
      fVar10 = fVar9;
    }
  }
  else {
    fVar10 = (float)(int)(fVar9 + -0.5);
  }
                    /* try { // try from 04f6c8d4 to 0506c8df has its CatchHandler @ 04f6c584 */
  if (*(uint *)(unaff_x21 + 0x18) < 4) {
LAB_04f6cae4:
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc();
  }
                    /* try { // try from 04f6c8e0 to 0506c8e7 has its CatchHandler @ 04f6c8f4 */
                    /* catch() { ... } // from try @ 04f6c86c with catch @ 04f6c8e8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04f6c8ac with catch @ 04f6c8f4
                       catch(type#2 @ 00000000) { ... } // from try @ 04f6c8e0 with catch @ 04f6c8f4
                        */
  *(uint *)(unaff_x21 + 0x18c) =
       (int)unaff_s14 & 0xffU | ((int)unaff_s10 & 0xffU) << 8 | ((int)param_2 & 0xffU) << 0x10 |
       (int)fVar10 << 0x18;
  if (unaff_x20 != 0) {
    FUN_0309de40();
    if ((*(char *)(unaff_x19 + 0x2a2) == '\0') && (unaff_w24 == *(int *)(unaff_x19 + 0x2a4))) {
      return;
    }
    *(undefined1 *)(unaff_x19 + 0x2a2) = 0;
    *(int *)(unaff_x19 + 0x2a4) = unaff_w24;
    if ((*(long *)(unaff_x19 + 0x120) != 0) &&
       (lVar3 = FUN_0366303c(*(long *)(unaff_x19 + 0x120),0), lVar3 != 0)) {
      iVar2 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor(lVar3,0);
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      else {
        if ((*(long *)(unaff_x19 + 0x120) == 0) ||
           (lVar3 = FUN_0366303c(*(long *)(unaff_x19 + 0x120),0), lVar3 == 0)) goto LAB_04f6cae0;
        uVar4 = FUN_036e1620(lVar3,0);
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_016466fc(*unaff_x23);
        }
        uVar5 = FUN_051d94d4(uVar4,0,0);
        if ((uVar5 & 1) != 0) {
          uVar4 = FUN_051d85ec(0);
        }
      }
      if ((*(long *)(unaff_x19 + 0x240) != 0) &&
         (lVar3 = FUN_051e516c(*(long *)(unaff_x19 + 0x240),0), lVar3 != 0)) {
        lVar3 = FUN_051df7a8(lVar3,0);
        puVar1 = PTR_DAT_06e492b0;
        lVar8 = *(long *)(unaff_x19 + 0x238);
        if (lVar8 != 0) {
          if (*(int *)(lVar8 + 0x18) == 0) goto LAB_04f6cae4;
          if (lVar3 != 0) {
            uVar5 = (ulong)*(uint *)(lVar8 + 0x24);
            uVar6 = (ulong)*(uint *)(lVar8 + 0x28);
            uVar12 = FUN_04f1c778(*(undefined4 *)(lVar8 + 0x20),uVar5,uVar6,lVar3,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            uVar12 = FUN_036df8cc(uVar12,uVar5,uVar6,uVar4,0);
            iVar2 = FUN_04882fc0(0);
            uVar4 = FUN_04f609b4();
            if (*(int *)(*unaff_x23 + 0xe0) == 0) {
              thunk_FUN_016466fc(*unaff_x23);
            }
            uVar6 = FUN_051d2ac0(uVar4,0,0);
            if ((uVar6 & 1) != 0) {
              plVar7 = (long *)FUN_04f609b4();
              if (plVar7 == (long *)0x0) goto LAB_04f6cae0;
              (**(code **)(*plVar7 + 0x288))
                        (uVar12,(float)iVar2 - (float)uVar5,plVar7,*(undefined8 *)(*plVar7 + 0x290))
              ;
            }
            return;
          }
        }
      }
    }
  }
LAB_04f6cae0:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


