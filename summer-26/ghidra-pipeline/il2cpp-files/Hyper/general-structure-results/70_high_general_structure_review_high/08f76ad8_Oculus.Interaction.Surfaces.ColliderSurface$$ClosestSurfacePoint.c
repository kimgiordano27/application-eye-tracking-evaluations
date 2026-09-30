/*
FUNCTION_NAME: Oculus.Interaction.Surfaces.ColliderSurface$$ClosestSurfacePoint
ENTRY_POINT: 08f76ad8
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


undefined8 Oculus_Interaction_Surfaces_ColliderSurface__ClosestSurfacePoint(code *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar8;
  
                    /* catch() { ... } // from try @ 08f76664 with catch @ 08f76ad8
                       catch() { ... } // from try @ 08f768f4 with catch @ 08f76ad8 */
  lVar3 = (*param_1)();
                    /* catch() { ... } // from try @ 08f765cc with catch @ 08f76adc
                       catch() { ... } // from try @ 08f76968 with catch @ 08f76adc
                       catch() { ... } // from try @ 08f76a50 with catch @ 08f76adc */
                    /* catch() { ... } // from try @ 08f7653c with catch @ 08f76ae0
                       catch() { ... } // from try @ 08f76960 with catch @ 08f76ae0
                       catch() { ... } // from try @ 08f76a38 with catch @ 08f76ae0 */
  *unaff_x20 = lVar3;
                    /* catch() { ... } // from try @ 08f7649c with catch @ 08f76ae4
                       catch() { ... } // from try @ 08f7695c with catch @ 08f76ae4
                       catch() { ... } // from try @ 08f76a2c with catch @ 08f76ae4 */
                    /* catch() { ... } // from try @ 08f7640c with catch @ 08f76ae8
                       catch() { ... } // from try @ 08f7694c with catch @ 08f76ae8
                       catch() { ... } // from try @ 08f76a08 with catch @ 08f76ae8 */
  thunk_FUN_049ee3d8();
  puVar1 = PTR_DAT_0ac711a8;
                    /* catch() { ... } // from try @ 08f7636c with catch @ 08f76aec
                       catch() { ... } // from try @ 08f76948 with catch @ 08f76aec
                       catch() { ... } // from try @ 08f769fc with catch @ 08f76aec */
  plVar8 = *(long **)(unaff_x21 + 0x28);
                    /* catch() { ... } // from try @ 08f762dc with catch @ 08f76af0
                       catch() { ... } // from try @ 08f76938 with catch @ 08f76af0
                       catch() { ... } // from try @ 08f769d8 with catch @ 08f76af0 */
  if (plVar8 != (long *)0x0) {
                    /* catch() { ... } // from try @ 08f7623c with catch @ 08f76af4
                       catch() { ... } // from try @ 08f76934 with catch @ 08f76af4
                       catch() { ... } // from try @ 08f769cc with catch @ 08f76af4 */
                    /* catch() { ... } // from try @ 08f761ac with catch @ 08f76af8
                       catch() { ... } // from try @ 08f76924 with catch @ 08f76af8
                       catch() { ... } // from try @ 08f769a8 with catch @ 08f76af8 */
    lVar3 = *plVar8;
                    /* catch() { ... } // from try @ 08f7610c with catch @ 08f76afc
                       catch() { ... } // from try @ 08f76920 with catch @ 08f76afc
                       catch() { ... } // from try @ 08f7699c with catch @ 08f76afc */
                    /* catch() { ... } // from try @ 08f7607c with catch @ 08f76b00
                       catch() { ... } // from try @ 08f76910 with catch @ 08f76b00
                       catch() { ... } // from try @ 08f76978 with catch @ 08f76b00 */
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* catch() { ... } // from try @ 08f76574 with catch @ 08f76b04
                       catch() { ... } // from try @ 08f76964 with catch @ 08f76b04
                       catch() { ... } // from try @ 08f76a44 with catch @ 08f76b04 */
                    /* catch() { ... } // from try @ 08f76500 with catch @ 08f76b08
                       catch() { ... } // from try @ 08f76954 with catch @ 08f76b08
                       catch() { ... } // from try @ 08f76a20 with catch @ 08f76b08 */
    if (uVar6 != 0) {
                    /* catch() { ... } // from try @ 08f76444 with catch @ 08f76b0c
                       catch() { ... } // from try @ 08f76950 with catch @ 08f76b0c
                       catch() { ... } // from try @ 08f76a14 with catch @ 08f76b0c */
                    /* catch() { ... } // from try @ 08f763d0 with catch @ 08f76b10
                       catch() { ... } // from try @ 08f76940 with catch @ 08f76b10
                       catch() { ... } // from try @ 08f769f0 with catch @ 08f76b10 */
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 08f76314 with catch @ 08f76b14
                       catch() { ... } // from try @ 08f7693c with catch @ 08f76b14
                       catch() { ... } // from try @ 08f769e4 with catch @ 08f76b14 */
                    /* catch() { ... } // from try @ 08f762a0 with catch @ 08f76b18
                       catch() { ... } // from try @ 08f7692c with catch @ 08f76b18
                       catch() { ... } // from try @ 08f769c0 with catch @ 08f76b18 */
                    /* catch() { ... } // from try @ 08f761e4 with catch @ 08f76b1c
                       catch() { ... } // from try @ 08f76928 with catch @ 08f76b1c
                       catch() { ... } // from try @ 08f769b4 with catch @ 08f76b1c */
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0ac711a8) {
                    /* try { // try from 08f76b44 to 09076b5b has its CatchHandler @ 08f76be0 */
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_08f76b48;
        }
                    /* catch() { ... } // from try @ 08f76170 with catch @ 08f76b20
                       catch() { ... } // from try @ 08f76918 with catch @ 08f76b20
                       catch() { ... } // from try @ 08f76990 with catch @ 08f76b20 */
        uVar6 = uVar6 - 1;
                    /* catch() { ... } // from try @ 08f760b4 with catch @ 08f76b24
                       catch() { ... } // from try @ 08f76914 with catch @ 08f76b24
                       catch() { ... } // from try @ 08f76984 with catch @ 08f76b24 */
        piVar7 = piVar7 + 4;
                    /* catch() { ... } // from try @ 08f76040 with catch @ 08f76b28
                       catch() { ... } // from try @ 08f76908 with catch @ 08f76b28
                       catch() { ... } // from try @ 08f7696c with catch @ 08f76b28 */
      } while (uVar6 != 0);
    }
                    /* catch() { ... } // from try @ 08f7679c with catch @ 08f76b2c
                       catch() { ... } // from try @ 08f76904 with catch @ 08f76b2c */
    puVar4 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac711a8,0);
LAB_08f76b48:
    iVar2 = (*(code *)*puVar4)(plVar8,puVar4[1]);
    if (2 < iVar2) {
                    /* try { // try from 08f76b5c to 09076bcf has its CatchHandler @ 08f75e5c */
      plVar8 = *(long **)(unaff_x21 + 0x28);
      (**(code **)(*unaff_x19 + 0x278))();
      if (*(int *)(*(long *)PTR_DAT_0ac0b718 + 0xe4) == 0) {
        thunk_FUN_049a583c(*(long *)PTR_DAT_0ac0b718);
      }
      uVar5 = FUN_08cf5044(0);
      if (*unaff_x20 != 0) {
        thunk_FUN_04956588(*unaff_x20,0);
                    /* try { // try from 08f76bd0 to 09076bdf has its CatchHandler @ 08f76be0 */
        FUN_08f5fbb8(*(undefined8 *)PTR_DAT_0ac73510,uVar5);
                    /* catch() { ... } // from try @ 08f76b44 with catch @ 08f76be0
                       catch() { ... } // from try @ 08f76bd0 with catch @ 08f76be0 */
                    /* try { // try from 08f76be4 to 09076be7 has its CatchHandler @ 08f76bf0 */
                    /* try { // try from 08f76be8 to 09076bf3 has its CatchHandler @ 08f75e5c */
        if (*(int *)(*(long *)PTR_DAT_0ac42ba0 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 08f76be4 with catch @ 08f76bf0 */
          thunk_FUN_049a583c(*(long *)PTR_DAT_0ac42ba0);
        }
        uVar5 = FUN_08f01e14();
        if (plVar8 != (long *)0x0) {
          lVar3 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                puVar4 = (undefined8 *)(lVar3 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                goto LAB_08f76c60;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_04980e68(plVar8,*(long *)puVar1,1);
LAB_08f76c60:
                    /* try { // try from 08f76c70 to 09076e1b has its CatchHandler @ 08f76c70
                       catch() { ... } // from try @ 08f76c70 with catch @ 08f76c70
                       catch() { ... } // from try @ 08f77308 with catch @ 08f76c70
                       catch() { ... } // from try @ 08f77490 with catch @ 08f76c70
                       catch() { ... } // from try @ 08f77558 with catch @ 08f76c70
                       catch() { ... } // from try @ 08f775e4 with catch @ 08f76c70 */
          (*(code *)*puVar4)(plVar8,3,uVar5,0,puVar4[1]);
          goto LAB_08f76c78;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
  }
LAB_08f76c78:
  FUN_08f077ec();
  return 1;
}


