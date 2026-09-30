/*
FUNCTION_NAME: Obi.SampleCharacterController$$Start
ENTRY_POINT: 00e1ed70
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Obi_SampleCharacterController__Start(_Unwind_Exception *param_1)

{
  _Unwind_Exception *p_Var1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  _Unwind_Exception *p_Var13;
  long lVar14;
  ulong uVar15;
  byte *unaff_x22;
  byte *pbVar16;
  _Unwind_Exception *p_Var18;
  long unaff_x25;
  ulong uVar19;
  ulong uVar20;
  undefined *in_stack_00000028;
  byte *in_stack_00000030;
  _Unwind_Exception *in_stack_00000038;
  byte *pbVar17;
  
  if (param_1 == (_Unwind_Exception *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00e1ed3c(0,0);
  }
  __cxa_begin_catch();
  uVar6 = __cxxabiv1::__isOurExceptionClass(param_1);
  if ((uVar6 & 1) == 0) {
    uVar7 = std::get_terminate();
    uVar11 = std::get_unexpected();
    p_Var18 = (_Unwind_Exception *)0x0;
  }
  else {
    unaff_x22 = *(byte **)(param_1 + -0x20);
    uVar11 = *(undefined8 *)(param_1 + -0x48);
    uVar7 = *(undefined8 *)(param_1 + -0x40);
    p_Var18 = param_1 + -0x60;
    unaff_x25 = (long)(int)~*(uint *)(param_1 + -0x2c);
    in_stack_00000030 = unaff_x22;
  }
  FUN_00e1e4d4(uVar11);
  __cxa_begin_catch();
  if ((uVar6 & 1) != 0) {
    in_stack_00000030 = unaff_x22 + 1;
    FUN_00e1f0e4(&stack0x00000030,*unaff_x22);
    pbVar17 = in_stack_00000030 + 1;
    bVar3 = *in_stack_00000030;
    uVar6 = (ulong)bVar3;
    in_stack_00000030 = pbVar17;
    if (uVar6 != 0xff) {
      uVar12 = 0;
      uVar19 = 0;
      do {
        pbVar16 = pbVar17 + 1;
        bVar2 = *pbVar17;
        uVar19 = ((ulong)bVar2 & 0x7f) << (uVar12 & 0x3f) | uVar19;
        uVar12 = uVar12 + 7;
        pbVar17 = pbVar16;
      } while ((char)bVar2 < '\0');
      in_stack_00000030 = pbVar16;
      puVar8 = (undefined8 *)__cxa_get_globals_fast();
      p_Var13 = (_Unwind_Exception *)*puVar8;
      if (p_Var13 != (_Unwind_Exception *)0x0) {
        p_Var1 = p_Var13 + 0x60;
        uVar5 = __cxxabiv1::__isOurExceptionClass(p_Var1);
        pbVar17 = pbVar16 + uVar19;
        if ((p_Var13 != p_Var18) && (((uVar5 ^ 1) & 1) == 0)) {
          lVar14 = *(long *)(p_Var13 + 8);
          lVar9 = __cxxabiv1::__getExceptionClass(p_Var1);
          if (lVar9 == 0x434c4e47432b2b01) {
            p_Var18 = *(_Unwind_Exception **)p_Var13;
          }
          else {
            p_Var18 = p_Var13 + 0x80;
          }
          uVar12 = 0;
          uVar15 = 0;
          uVar20 = uVar6 & 0xf;
          lVar9 = unaff_x25 + uVar19;
          while( true ) {
            for (; uVar15 = ((ulong)pbVar16[lVar9] & 0x7f) << (uVar12 & 0x3f) | uVar15,
                (char)pbVar16[lVar9] < '\0'; lVar9 = lVar9 + 1) {
              uVar12 = uVar12 + 7;
            }
            if (uVar15 == 0) break;
            if ((0xc < (uint)uVar20) || ((0x1c1dU >> uVar20 & 1) == 0)) goto LAB_00e1f020;
            in_stack_00000038 =
                 (_Unwind_Exception *)
                 ((long)pbVar17 - (uVar15 << (*(ulong *)(&DAT_02b8cc38 + uVar20 * 8) & 0x3f)));
            plVar10 = (long *)FUN_00e1f0e4(&stack0x00000038,uVar6);
            in_stack_00000038 = p_Var18;
            uVar12 = (**(code **)(*plVar10 + 0x20))(plVar10,lVar14,&stack0x00000038);
            if ((uVar12 & 1) != 0) {
              do {
                *(int *)(p_Var13 + 0x30) = -*(int *)(p_Var13 + 0x30);
                *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
                __cxa_end_catch();
                __cxa_end_catch();
                __cxa_begin_catch(p_Var1);
                __cxa_rethrow();
              } while( true );
            }
            uVar12 = 0;
            uVar15 = 0;
            lVar9 = lVar9 + 1;
          }
        }
        puVar4 = OVRPlugin_OVRP_1_35_0_TypeInfo;
        in_stack_00000028 =
             Method_UnityEngine_ProBuilder_MeshOperations_Bevel_<>c_<BevelEdges>b__0_3__ + 0x10;
        uVar15 = (ulong)(bVar3 + 6) & 0xf;
        lVar9 = unaff_x25 + uVar19;
        uVar12 = 0;
        uVar19 = 0;
LAB_00e1efb0:
        for (; uVar19 = ((ulong)pbVar16[lVar9] & 0x7f) << (uVar12 & 0x3f) | uVar19,
            (char)pbVar16[lVar9] < '\0'; lVar9 = lVar9 + 1) {
          uVar12 = uVar12 + 7;
        }
        if (uVar19 == 0) {
          std::exception::~exception((exception *)&stack0x00000028);
          goto LAB_00e1f034;
        }
        if ((10 < (uint)uVar15) || ((0x747U >> uVar15 & 1) == 0)) {
LAB_00e1f020:
          in_stack_00000038 = (_Unwind_Exception *)pbVar17;
                    /* WARNING: Subroutine does not return */
          FUN_00e1ed3c(1,param_1);
        }
        in_stack_00000038 =
             (_Unwind_Exception *)
             ((long)pbVar17 - (uVar19 << (*(ulong *)(&DAT_02b8cca0 + uVar15 * 8) & 0x3f)));
        plVar10 = (long *)FUN_00e1f0e4(&stack0x00000038,uVar6);
        in_stack_00000038 = (_Unwind_Exception *)&stack0x00000028;
        uVar12 = (**(code **)(*plVar10 + 0x20))(plVar10,puVar4,&stack0x00000038);
        if ((uVar12 & 1) == 0) {
          uVar12 = 0;
          uVar19 = 0;
          lVar9 = lVar9 + 1;
          goto LAB_00e1efb0;
        }
        goto LAB_00e1f040;
      }
    }
    uVar11 = FUN_00e1e514(uVar7);
    std::exception::~exception((exception *)&stack0x00000028);
    __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar11);
  }
LAB_00e1f034:
  __cxa_end_catch();
  FUN_00e1e514(uVar7);
LAB_00e1f040:
  __cxa_end_catch();
  plVar10 = (long *)__cxa_allocate_exception(8);
  *plVar10 = (long)(Method_UnityEngine_ProBuilder_MeshOperations_Bevel_<>c_<BevelEdges>b__0_3__ +
                   0x10);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(plVar10,OVRPlugin_OVRP_1_35_0_TypeInfo,
              Method_System_Runtime_CompilerServices_StrongBox<object>__ctor__);
}


