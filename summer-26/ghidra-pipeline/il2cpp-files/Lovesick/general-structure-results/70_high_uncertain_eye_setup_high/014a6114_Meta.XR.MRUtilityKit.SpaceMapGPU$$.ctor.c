/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$.ctor
ENTRY_POINT: 014a6114
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x014a6564) */

void Meta_XR_MRUtilityKit_SpaceMapGPU___ctor(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 *unaff_x27;
  long unaff_x28;
  ulong in_stack_00000020;
  long in_stack_00000028;
  ulong in_stack_00000030;
  long in_stack_00000038;
  ulong in_stack_00000040;
  long in_stack_00000048;
  
code_r0x014a6114:
  uVar3 = FUN_01780344(param_1,param_2);
  plVar4 = (long *)FUN_016b2cb0(unaff_x22,uVar3,0);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar8 = *plVar4;
                    /* catch() { ... } // from try @ 014a5d28 with catch @ 014a6134
                       try { // try from 014a6134 to 015a614b has its CatchHandler @ 014a5a30 */
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
  if (uVar9 != 0) {
                    /* try { // try from 014a614c to 015a614f has its CatchHandler @ 014a6160 */
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)Method_OVRSpatialAnchor_UnboundAnchor_get_Pose__) {
                    /* try { // try from 014a6178 to 015a619b has its CatchHandler @ 014a61b0 */
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_014a6184;
      }
      uVar9 = uVar9 - 1;
                    /* catch() { ... } // from try @ 014a614c with catch @ 014a6160 */
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_00d59724(plVar4,*(long *)Method_OVRSpatialAnchor_UnboundAnchor_get_Pose__,0);
LAB_014a6184:
  plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  do {
    lVar8 = *plVar4;
                    /* try { // try from 014a619c to 015a61a7 has its CatchHandler @ 014a5a30 */
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar9 != 0) {
                    /* try { // try from 014a61a8 to 015a61af has its CatchHandler @ 014a61b0 */
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 014a6104 with catch @ 014a61b0
                       catch() { ... } // from try @ 014a6178 with catch @ 014a61b0
                       catch() { ... } // from try @ 014a61a8 with catch @ 014a61b0 */
                    /* try { // try from 014a61b4 to 015a6427 has its CatchHandler @ 014a61b4
                       catch() { ... } // from try @ 014a61b4 with catch @ 014a61b4
                       catch() { ... } // from try @ 014a6468 with catch @ 014a61b4
                       catch() { ... } // from try @ 014a649c with catch @ 014a61b4
                       catch() { ... } // from try @ 014a650c with catch @ 014a61b4
                       catch() { ... } // from try @ 014a6570 with catch @ 014a61b4
                       catch() { ... } // from try @ 014a6644 with catch @ 014a61b4
                       catch() { ... } // from try @ 014a6718 with catch @ 014a61b4 */
        if (*(long *)(piVar10 + -2) == *unaff_x21) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_014a61e4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724(plVar4,*unaff_x21,0);
LAB_014a61e4:
    uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar9 & 1) == 0) break;
    lVar8 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)UnityEngine_UIElements_UIR_Implementation_CommandGenerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_014a6248;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_00d59724(plVar4,*(long *)
                                  UnityEngine_UIElements_UIR_Implementation_CommandGenerator_TypeInfo
                          ,0);
LAB_014a6248:
    plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    bVar1 = *(byte *)(*(long *)System_IO_MonoIO_TypeInfo + 300);
    if ((*(byte *)(*plVar6 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_IO_MonoIO_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(plVar6);
    }
    lVar8 = FUN_0129210c();
    lVar7 = thunk_FUN_00d62348(*unaff_x20);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_017b46ec(lVar7,0);
    *(long *)(lVar7 + 0x10) = unaff_x28;
    *(undefined8 *)(lVar7 + 0x18) = unaff_x22;
    *(long **)(lVar7 + 0x20) = plVar6;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_00bc397c(lVar8,lVar7,*unaff_x27);
  } while( true );
  if (plVar4 != (long *)0x0) {
    lVar8 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)StringLiteral_10310) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_014a64ec;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724(plVar4,*(long *)StringLiteral_10310,0);
LAB_014a64ec:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  uVar9 = (ulong)*(uint *)(in_stack_00000048 + 0x18);
  in_stack_00000040 = in_stack_00000040 + 1;
  if ((long)(int)*(uint *)(in_stack_00000048 + 0x18) <= (long)in_stack_00000040) {
    do {
      uVar9 = (ulong)*(uint *)(in_stack_00000038 + 0x18);
      in_stack_00000030 = in_stack_00000030 + 1;
      if ((long)(int)*(uint *)(in_stack_00000038 + 0x18) <= (long)in_stack_00000030) {
        do {
          puVar2 = 
          Method_System_Collections_Generic_KeyValuePair<LabelTarget,_LabelInfo>_get_Value__;
          in_stack_00000020 = in_stack_00000020 + 1;
          if ((long)(int)*(uint *)(in_stack_00000028 + 0x18) <= (long)in_stack_00000020) {
            lVar8 = *(long *)
                     Method_System_Collections_Generic_KeyValuePair<LabelTarget,_LabelInfo>_get_Value__
            ;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar8 = *(long *)puVar2;
            }
            *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8) = unaff_x19;
            return;
          }
          if (*(uint *)(in_stack_00000028 + 0x18) <= in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          plVar4 = *(long **)(in_stack_00000028 + in_stack_00000020 * 8 + 0x20);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          in_stack_00000038 =
               (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
          if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        } while ((int)*(ulong *)(in_stack_00000038 + 0x18) < 1);
        in_stack_00000030 = 0;
        uVar9 = *(ulong *)(in_stack_00000038 + 0x18) & 0xffffffff;
      }
      if (uVar9 <= in_stack_00000030) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      unaff_x28 = *(long *)(in_stack_00000038 + in_stack_00000030 * 8 + 0x20);
      if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      in_stack_00000048 = FUN_0178c5b0(unaff_x28,0);
      if (in_stack_00000048 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    } while ((int)*(ulong *)(in_stack_00000048 + 0x18) < 1);
    in_stack_00000040 = 0;
    uVar9 = *(ulong *)(in_stack_00000048 + 0x18) & 0xffffffff;
  }
  if (uVar9 <= in_stack_00000040) {
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  unaff_x22 = *(undefined8 *)(in_stack_00000048 + in_stack_00000040 * 8 + 0x20);
  param_1 = *(undefined8 *)Method_Meta_WitAi_VoiceService_set_UsePlatformIntegrations__;
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  param_2 = 0;
  goto code_r0x014a6114;
}


