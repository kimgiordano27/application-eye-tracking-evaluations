/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.GUIStyle_DirectConverter$$DoDeserialize
ENTRY_POINT: 03e94b70
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_4
*/


long Unity_VisualScripting_FullSerializer_GUIStyle_DirectConverter__DoDeserialize
               (long *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  undefined4 unaff_w22;
  undefined8 uVar6;
  long *unaff_x25;
  long *unaff_x26;
  
  puVar2 = Method_System_Linq_Enumerable_Select<ValueInput,_object>__;
  if (*param_1 != 0) {
    FUN_02ed9a64(*param_1,param_2,
                 *(undefined8 *)Method_System_Linq_Enumerable_Select<ValueInput,_object>__);
    if ((unaff_x21 & 1) != 0) {
      lVar4 = *(long *)(unaff_x20 + 0xd8);
      if (((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x18))) &&
         (lVar4 = FUN_03e94d38(lVar4,unaff_w22,1), *unaff_x19 != -1)) {
        return lVar4;
      }
      lVar4 = FUN_03e90608();
      if (lVar4 == 0) goto LAB_03e94d34;
      uVar6 = *(undefined8 *)(lVar4 + 0x68);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*unaff_x25);
      }
      uVar5 = FUN_04073094(uVar6,0,0);
      if ((uVar5 & 1) != 0) {
        lVar4 = FUN_03e90608();
        if (lVar4 == 0) goto LAB_03e94d34;
        lVar4 = FUN_03e94ed8(*(undefined8 *)(lVar4 + 0x68),unaff_w22,1);
        if (*unaff_x19 != -1) {
          return lVar4;
        }
      }
    }
    if (**(long **)(*unaff_x26 + 0xb8) != 0) {
      FUN_02ed8ef4(**(long **)(*unaff_x26 + 0xb8),
                   *(undefined8 *)Method_System_Linq_Enumerable_Select<Vector3,_PolylinePoint>__);
      lVar4 = FUN_03e90608();
      if (lVar4 != 0) {
        uVar1 = *(undefined4 *)(lVar4 + 0x7c);
        iVar3 = FUN_03e94414();
        *unaff_x19 = iVar3;
        if (iVar3 == -1) {
          if (**(long **)(*unaff_x26 + 0xb8) == 0) goto LAB_03e94d34;
          FUN_02ed9a64(**(long **)(*unaff_x26 + 0xb8),param_2,*(undefined8 *)puVar2);
          if ((unaff_x21 & 1) != 0) {
            lVar4 = *(long *)(unaff_x20 + 0xd8);
            if (((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x18))) &&
               (lVar4 = FUN_03e947bc(lVar4,uVar1,1), *unaff_x19 != -1)) {
              return lVar4;
            }
            lVar4 = FUN_03e90608();
            if (lVar4 == 0) goto LAB_03e94d34;
            uVar6 = *(undefined8 *)(lVar4 + 0x68);
            if (*(int *)(*unaff_x25 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(*unaff_x25);
            }
            uVar5 = FUN_04073094(uVar6,0,0);
            if ((uVar5 & 1) != 0) {
              lVar4 = FUN_03e90608();
              if (lVar4 == 0) goto LAB_03e94d34;
              lVar4 = FUN_03e9495c(*(undefined8 *)(lVar4 + 0x68),uVar1,1);
              if (*unaff_x19 != -1) {
                return lVar4;
              }
            }
          }
          unaff_x20 = 0;
          *unaff_x19 = -1;
        }
                    /* try { // try from 03e94d1c to 03f94d8f has its CatchHandler @ 03e94d1c
                       catch() { ... } // from try @ 03e94d1c with catch @ 03e94d1c
                       catch() { ... } // from try @ 03e94dd8 with catch @ 03e94d1c
                       catch() { ... } // from try @ 03e94e04 with catch @ 03e94d1c
                       catch() { ... } // from try @ 03e94e3c with catch @ 03e94d1c
                       catch() { ... } // from try @ 03e94e6c with catch @ 03e94d1c */
        return unaff_x20;
      }
    }
  }
LAB_03e94d34:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


