/*
FUNCTION_NAME: __cxa_call_unexpected
ENTRY_POINT: 00e1ed68
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void __cxa_call_unexpected(_Unwind_Exception *param_1)

{
  _Unwind_Exception *p_Var1;
  _Unwind_Exception *p_Var2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  _Unwind_Exception *p_Var14;
  long lVar15;
  ulong uVar16;
  byte *unaff_x22;
  byte *pbVar17;
  _Unwind_Exception *p_Var19;
  long unaff_x25;
  ulong uVar20;
  ulong uVar21;
  undefined *local_78;
  byte *local_70;
  _Unwind_Exception *local_68;
  byte *pbVar18;
  
  if (param_1 == (_Unwind_Exception *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00e1ed3c(0,0);
  }
  __cxa_begin_catch();
  uVar7 = __cxxabiv1::__isOurExceptionClass(param_1);
  if ((uVar7 & 1) == 0) {
    uVar8 = std::get_terminate();
    uVar12 = std::get_unexpected();
    p_Var19 = (_Unwind_Exception *)0x0;
  }
  else {
    unaff_x22 = *(byte **)(param_1 + -0x20);
    uVar12 = *(undefined8 *)(param_1 + -0x48);
    uVar8 = *(undefined8 *)(param_1 + -0x40);
    p_Var19 = param_1 + -0x60;
    unaff_x25 = (long)(int)~*(uint *)(param_1 + -0x2c);
    local_70 = unaff_x22;
  }
  FUN_00e1e4d4(uVar12);
  __cxa_begin_catch();
  if ((uVar7 & 1) != 0) {
    local_70 = unaff_x22 + 1;
    FUN_00e1f0e4(&local_70,*unaff_x22);
    pbVar18 = local_70 + 1;
    bVar4 = *local_70;
    uVar7 = (ulong)bVar4;
    local_70 = pbVar18;
    if (uVar7 != 0xff) {
      uVar13 = 0;
      uVar20 = 0;
      do {
        pbVar17 = pbVar18 + 1;
        bVar3 = *pbVar18;
        uVar20 = ((ulong)bVar3 & 0x7f) << (uVar13 & 0x3f) | uVar20;
        uVar13 = uVar13 + 7;
        pbVar18 = pbVar17;
      } while ((char)bVar3 < '\0');
      local_70 = pbVar17;
      puVar9 = (undefined8 *)__cxa_get_globals_fast();
      p_Var14 = (_Unwind_Exception *)*puVar9;
      if (p_Var14 != (_Unwind_Exception *)0x0) {
        p_Var1 = p_Var14 + 0x60;
        uVar6 = __cxxabiv1::__isOurExceptionClass(p_Var1);
        p_Var2 = (_Unwind_Exception *)(pbVar17 + uVar20);
        if ((p_Var14 != p_Var19) && (((uVar6 ^ 1) & 1) == 0)) {
          lVar15 = *(long *)(p_Var14 + 8);
          lVar10 = __cxxabiv1::__getExceptionClass(p_Var1);
          if (lVar10 == 0x434c4e47432b2b01) {
            p_Var19 = *(_Unwind_Exception **)p_Var14;
          }
          else {
            p_Var19 = p_Var14 + 0x80;
          }
          uVar13 = 0;
          uVar16 = 0;
          uVar21 = uVar7 & 0xf;
          lVar10 = unaff_x25 + uVar20;
          while( true ) {
            for (; uVar16 = ((ulong)pbVar17[lVar10] & 0x7f) << (uVar13 & 0x3f) | uVar16,
                (char)pbVar17[lVar10] < '\0'; lVar10 = lVar10 + 1) {
              uVar13 = uVar13 + 7;
            }
            if (uVar16 == 0) break;
            if ((0xc < (uint)uVar21) || ((0x1c1dU >> uVar21 & 1) == 0)) goto LAB_00e1f020;
            local_68 = p_Var2 + -(uVar16 << (*(ulong *)(&DAT_02b8cc38 + uVar21 * 8) & 0x3f));
            plVar11 = (long *)FUN_00e1f0e4(&local_68,uVar7);
            local_68 = p_Var19;
            uVar13 = (**(code **)(*plVar11 + 0x20))(plVar11,lVar15,&local_68);
            if ((uVar13 & 1) != 0) {
              do {
                *(int *)(p_Var14 + 0x30) = -*(int *)(p_Var14 + 0x30);
                *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
                __cxa_end_catch();
                __cxa_end_catch();
                __cxa_begin_catch(p_Var1);
                __cxa_rethrow();
              } while( true );
            }
            uVar13 = 0;
            uVar16 = 0;
            lVar10 = lVar10 + 1;
          }
        }
        puVar5 = OVRPlugin_OVRP_1_35_0_TypeInfo;
        local_78 = Method_UnityEngine_ProBuilder_MeshOperations_Bevel_<>c_<BevelEdges>b__0_3__ +
                   0x10;
        uVar16 = (ulong)(bVar4 + 6) & 0xf;
        lVar10 = unaff_x25 + uVar20;
        uVar13 = 0;
        uVar20 = 0;
LAB_00e1efb0:
        for (; uVar20 = ((ulong)pbVar17[lVar10] & 0x7f) << (uVar13 & 0x3f) | uVar20,
            (char)pbVar17[lVar10] < '\0'; lVar10 = lVar10 + 1) {
          uVar13 = uVar13 + 7;
        }
        if (uVar20 == 0) {
          std::exception::~exception((exception *)&local_78);
          goto LAB_00e1f034;
        }
        if ((10 < (uint)uVar16) || ((0x747U >> uVar16 & 1) == 0)) {
LAB_00e1f020:
          local_68 = p_Var2;
                    /* WARNING: Subroutine does not return */
          FUN_00e1ed3c(1,param_1);
        }
        local_68 = p_Var2 + -(uVar20 << (*(ulong *)(&DAT_02b8cca0 + uVar16 * 8) & 0x3f));
        plVar11 = (long *)FUN_00e1f0e4(&local_68,uVar7);
        local_68 = (_Unwind_Exception *)&local_78;
        uVar13 = (**(code **)(*plVar11 + 0x20))(plVar11,puVar5,&local_68);
        if ((uVar13 & 1) == 0) {
          uVar13 = 0;
          uVar20 = 0;
          lVar10 = lVar10 + 1;
          goto LAB_00e1efb0;
        }
        goto LAB_00e1f040;
      }
    }
    uVar12 = FUN_00e1e514(uVar8);
    std::exception::~exception((exception *)&local_78);
    __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar12);
  }
LAB_00e1f034:
  __cxa_end_catch();
  FUN_00e1e514(uVar8);
LAB_00e1f040:
  __cxa_end_catch();
  plVar11 = (long *)__cxa_allocate_exception(8);
  *plVar11 = (long)(Method_UnityEngine_ProBuilder_MeshOperations_Bevel_<>c_<BevelEdges>b__0_3__ +
                   0x10);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(plVar11,OVRPlugin_OVRP_1_35_0_TypeInfo,
              Method_System_Runtime_CompilerServices_StrongBox<object>__ctor__);
}


